#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int password;
    struct node *next;
};

struct node *Create (int n)
{
    struct node *p = NULL;
    struct node *head;
    head = (struct node*) malloc(sizeof(struct node)); 
    p = head;
    struct node *s;
    int i = 1;

    if(n != 0)
    {
        while(i <= n)
        {
            s = (struct node *) malloc(sizeof(struct node));
            s -> data = i++;
            printf("Enter a password\n");
            scanf("%d", &s -> password);
            p -> next = s;
            p = s;
        }

        s -> next = head -> next;
    }

    free(head);

    return s -> next;
}

int main (void)
{
    int n = 3;
    int i;
    struct node *p;
    struct node *temp;

    p = Create(n);

    if((p -> password) - 1 != 0){
        while(p != p -> next)
        {
            for(i = 1; i < (p -> password) - 1; i++)
            {
                p = p -> next;
            }

            printf("%d -> ", p -> next -> data);

            temp = p -> next;
            p -> next = temp -> next;

            free(temp);

            p = p -> next;
        }
    }else if((p -> password) - 1 == 0){
        for(i = 1; i < 3; i++){
            printf("%d -> ", p -> data);
            temp = p;
            p = p -> next;
            free(temp);
        }
    }
    printf("%d", p -> data);
    return 0;
}