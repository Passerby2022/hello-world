#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[15];
    struct student *next;
};

//创建结点
struct student *CREATE ()
{
    struct student *head;       
    struct student *next;
    struct student *current;
    char str[15];
    char flag;

    printf("please input student name\n");
    scanf("%s", str);
    getchar();
    head = (struct student *) malloc(sizeof(struct student));
    strcpy(head -> name, str);

    printf("continue output(y/n):\n");
    scanf("%c", &flag);

    current = head;

    while(flag != 'n')
    {
        printf("please input student name\n");
        scanf("%s", str);
        getchar();
        strcpy(current -> name, str);

        current -> next = next;
        current = next;

        printf("continue output(y/n):\n");
        scanf("%c", &flag);
    }

    current -> next = NULL;
    return head;
}

//显示链表
void DISPLAY (struct student *head)
{
    while(1)
    {
        printf("%s", head -> name);
        if(head != NULL){
            head = head -> next;
        }else{
            break;
        }
    }
}

//插入链表
void INSERT (struct student *head, int spot)
{
    struct student *current;
    struct student *insert;
    char str[15];

    printf("please input student name\n");
    scanf("%s", str);
    getchar();
    insert = (struct student *) malloc (sizeof(struct student));
    strcpy(insert -> name, str);

    current = head;

    if(spot > 0){
        while(spot > 1){
            current = current -> next;
            spot--;
        }
        insert -> next = current -> next;
        current -> next = insert;
    }else if(spot == 1){
        head = insert;
        insert -> next = current;
    }
}

//删除结点
void DELET (struct student *head, int spot)
{
    struct student *current;
    struct student *pre;
    int i;

    current = head;
    pre = current;

    printf("----delete NO.%d member----\n", spot);

    for(i = 0; i < spot; i++)
    {
        pre = current;
        current = current -> next;
    } 

    pre -> next = current -> next;
    free(current);
} 

int main (void)
{
    struct student *head;
    int i;
    int number;
    int spot;
    int n;

    head = CREATE();

    printf("Enter a number\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
       printf("ENTER 1 or 2\n");
        printf("1 is insert\n");
        printf("2 is delete\n");
        scanf("%d", &number); 
        if(number == 1){
            printf("where to insert\n");
            scanf("%d", &spot);
            INSERT(head, spot);
        }else if(number == 2){
            printf("where to delete\n");
            scanf("%d", &spot);
            DELET(head, spot);
        }
    }

    printf("Latest member list after inserting element:\n");
    DISPLAY(head);

    return 0;
}