#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
    int data;
    struct Node *next;
};

//初始换带头结点的空链表
int InitList (struct Node **L)
{
    (*L) = (struct Node*) malloc(sizeof(struct Node));     //初始化头结点的内存空间

    if(!(*L)){     //内存分配失败
        return 0;
    }

    (*L) -> next = NULL;       //L的指针域为空，头结点的指向为空

    return 1;
}

//初始条件，顺序线性表L已存在，操作结果，返回L中数据元素个数
int ListLength (struct Node *L)
{
    int i = 0;      //
    struct Node *p = L -> next;     //p指向头结点的指针域
    while(p)
    {
        i++;
        p = p -> next;
    }
    return i;
}

//随机产生n个元素的值，建立带表头结点的单链线性表L<头插法>
void CreateListHead (struct Node **L, int n)
{
    struct Node *p;
    int i;

    srand(time(0));     //初始化随机数种子

    (*L) = (struct Node*) malloc(sizeof(struct Node));         //初始化链表的头结点
    (*L) -> next = NULL;                                       //头结点的指针域指向为空

    for(i = 0; i < n; i++)
    {
        p = (struct Node*) malloc(sizeof(struct Node));     //生成新结点
        p -> data = rand() % 100 + 1;                       //随机生成100以内的数字
        p -> next = (*L) -> next;                              //p结点的指针域指向为空
        (*L) -> next = p;                                      //插入到表头，头指针L -> next指向p结点
    }
}

//随机产生n个元素的值，建立带表头结点的循环单链线性表L（尾插法）
void CreateListTall (struct Node **L, int n)
{
    struct Node *p;
    struct Node *r;
    int i;

    srand(time(0));         //初始化随机数种子
    (*L) = (struct Node*) malloc(sizeof(struct Node));     //L为整个线性表
    r = *L;                  //r为指向尾部的结点

    for(i = 0; i < n; i++)
    {
        p = (struct Node*) malloc(sizeof(struct Node));     //生成新结点
        p -> data = rand() % 100 + 1;                       //随机生成100以内的数字
        r -> next = p;                                      //将表尾终端结点的指针指向新结点
        r = p;                                              //将当前的新结点定义为表尾终端结点
    }

    r -> next = (*L) -> next -> next;              //即尾指针指向头结点后的第二个结点
} 

//比较步数的方法
int HasLoop1 (struct Node *L)
{
    struct Node *cur1 = L;       //定义结点cur1，等于头结点
    int pos1 = 0;               //cur1的步数

    //里面的循环走一遍外面才走一步，cur1每走一步，cur2都要从头走到cur1的位置
    while(cur1)
    {
        struct Node *cur2 = L;      //定义结点cur2，等于头结点
        int pos2 = 0;                //cur2的步数
        while(cur2)
        {                            //cur2结点不为空
            if(cur2 == cur1){           //当cur1和cur2到达相同结点时
                if(pos1 == pos2){        //走过的步数一样
                    break;          //说明没有环
                }else{              //否则
                    printf("环的位置在第%d个结点处,\n\n", pos2);
                    return 1;               //有环并返回1
                }
            }
            cur2 = cur2 -> next;        //如果没发现环，继续下一个结点
            pos2++;                     //cur2步数自增
        }
        cur1 = cur1 -> next;            //cur1继续向后一个结点
        pos1++;                         //cur1步数自增
    }
    return 0;
} 

//利用快慢指针的方法
int HasLoop2 (struct Node *L)
{
    int step1 = 1;
    int step2 = 2;
    struct Node *p = L;     //慢指针指向头结点
    struct Node *q = L;     //快指针指向头结点

    while(p != NULL && q != NULL && q -> next != NULL)  
    {
        p = p -> next;
        if(q -> next != NULL){
            q = q -> next -> next;
        }

        printf("p:%d, q:%d\n", p -> data, q -> data);

        if(p == q){
            return 1;       //如果p和q的位置相等，即p追上q
        }
    }

    return 0;
}

int main (void)
{
    struct Node *L;
    int i;
    char opp;
    int e;
    int find;
    int temp;

    i = InitList(&L);
    printf("初始化L后:ListLength(L) = %d\n", ListLength(L));

    printf("\n1,创建有环链表(尾插法)\n2.创建无环链表(头插法)\n3.判断链表是否有环\n0.退出\n\n");
    while(opp != '0')
    {
        scanf("%c", &opp);
        switch(opp)
        {
            case '1':
                CreateListTall(&L, 10);          
                printf("成功创建有环L(尾插法)\n");
                printf("\n");
                break;
            case '2':
                CreateListHead(&L, 10);
                printf("成功创建无环L(头插法)\n");
                printf("\n");
                break;
            case '3':
                printf("方法一:\n\n");
                if(HasLoop1(L)){
                    printf("结论:链表有环\n\n\n");
                }else{
                    printf("结论:链表无环\n\n\n");
                }

                printf("方法二:\n\n");
                if(HasLoop2(L)){
                    printf("结论:链表有环\n\n\n");
                }else{
                    printf("结论:链表无环\n\n\n");
                }

                printf("\n");
                break;
            case '0':
                exit(0);
        }
    }

    return 0;
}