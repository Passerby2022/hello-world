#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *prior;
    struct node *next;
};

//struct node* InitList (struct node *L)
struct node* InitList ()
{   
    //定义两个指针来交互生成循环链表的结点以及结点之间的关系
    struct node *p;
    struct node *q;
    int i;

    L = (struct node *) malloc(sizeof(struct node));        //定义头结点
    
    if(!L){         //分配失败
        return 0;   //返回
    }

    L -> next = L -> prior = NULL;
    p = L;              //p为头结点

    for(i = 0; i < 26; i++)
    {
        q = (struct node *) malloc(sizeof(struct node));
        
        if(!q){         //为q分配失败
            return 0;
        }

        q -> data = 'A' + i;            //以ASCII码

        q -> prior = p;
        q -> next = p -> next;          //相当于q -> next指向为NULL
        p -> next = q;
        //q -> next = p -> next;        //顺序和上一步互换也不影响

        p = q;      //p和q的名字互换，即q变成p，q -> next即原来q的下一个结点变成p
    }

    p -> next = L -> next;           //运行到最后p和q指向同一个位置，p = q；
    L -> next -> prior = p;

    free(L);
    return p;
}

//排序
void Caesar (struct node *p, int i)
{
    if(i > 0){
        do
        {
            p = p -> next;
        }while(--i);
    }

    if(i < 0){
        do
        {
            p = p -> prior;
        }while(++i);
    }

    //return p;
}

int main (void)
{
    struct node *temp;
    struct node *head;
    struct node *L;
    int i;
    int n;

    L= InitList(head);
    printf("Enter a number:");
    scanf("%d", &n);
    printf("\n");
    //L = Caesar(temp, n);
    Caesar(L, n);

    for(i = 0; i < 26; i++)
    {
        L = L -> next;
        printf("%c", L -> data);
    }

    return 0;
}