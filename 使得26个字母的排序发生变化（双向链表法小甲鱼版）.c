#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *prior;
    struct node *next;
};

int InitList (struct node **L)
{   
    //定义两个指针来交互生成循环链表的结点以及结点之间的关系
    struct node *p;
    struct node *q;
    int i;

    (*L) = (struct node *) malloc(sizeof(struct node));        //定义头结点
    
    if(!(*L)){         //分配失败
        return 0;   //返回
    }

    (*L) -> next = (*L) -> prior = NULL;
    p = (*L);              //p为头结点

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

        p = q;      //p和q的名字互换，即q变成p，q -> next即原来q的下一个结点变成p
    }
    
    p -> next = (*L) -> next;           //运行到最后p和q指向同一个位置，p = q
    (*L) -> next -> prior = p;
    free((*L));
    
    return 1;
}

//排序
void Caesar (struct node **L, int i)
{
    if(i > 0){
        do
        {
            (*L) = (*L) -> next;
        }while(--i);
    }

    if(i < 0){
        do
        {
            (*L) = (*L) -> next -> prior -> prior;      //改为(*L)=(*L)->next->prior->prior;就能正常跑，我的理解是(*L) = (*L) -> next -> prior相当于尾结点加上->prior为尾结点前一个结点
        }while(++i);
    }
}

int main (void)
{
    struct node *L;
    int i;
    int n;

    InitList(&L);
    printf("Enter a number:");
    scanf("%d", &n);
    printf("\n");
    Caesar(&L, n);

    for(i = 0; i < 26; i++)
    {
        L = L -> next;
        printf("%c", L -> data);
    }

    return 0;
}