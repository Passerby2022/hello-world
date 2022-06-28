#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//尾插法创建单循环链表
struct node* Create(int n)
{
    struct node* head;
    struct node* s;
    struct node* r;
    int i;
    head = NULL;
    r = head;

    for(i = 1; i <= n; i++)
    {
        s = (struct node*) malloc(sizeof(struct node));     //初始化新结点
        s -> data = i;      //为s的数据域赋值

        if(head == NULL){   //当头结点为空时
            head = s;       //头结点就是新结点
        }else{  
            r -> next = s;      //否则头结点的下一个结点为新结点
        }

        r = s;              //头指针指向最后一个结点
    }

    r -> next = head;       //尾指针指向头结点形成单循环链表

    return head;
}

void Order (struct node* head, int n)
{
    struct node* p;
    int i;
    int count = 0;
    int flag = 0;
    p = head;

    while(1)
    {
        for(i = 1; i <= n; i++)
        {
            printf("%d", p -> data);
            p = p -> next;
            count ++;
        }

        if(count % n == 0){
            printf("\n");
        }
        flag++;
        p = p -> next;

        if(flag == n){
            break;
        }
    }
}

int main (void)
{
    struct node* head;
    int n = 5;

    head = Create(n);
    Order(head, n);

    return 0;
}