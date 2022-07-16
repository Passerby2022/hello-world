#include <stdio.h>
#include <stdlib.h>

//定义结点的结构体
typedef struct node
{
    int data;
    struct node *next;
}node;

//创建链表的结点
node *create (int n)        //n为结点的数量
{
    node (*p) = NULL, *head;
    head = (node*) malloc(sizeof(node));        //创建头结点
    p = head;                   //p为指向当前结点的指针，相当于头指针
    node *s;
    int i = 1;

    if(n != 0){
        while(i <= n)
        {   
            s = (node *) malloc(sizeof(node));      //生成新的结点
            s -> data = i++;                        //给新的结点赋值，i++就是先赋给i的值之后i才开始自增
            p -> next = s;                          //头结点指向新结点
            p = s;                                  //头指针指向新结点
        }
        s -> next = head -> next;                   //因为是循环链表所以尾指针要指向头结点之后的第一个结点
    }

    free(head);         //释放头结点，头结点只是个工具人
    return s -> next;           //s -> next是最后一个结点的尾指针，现在这个最后的结点指向第一个结点，即返回原来头结点之后的第一个结点，即现在的头结点
}

int main (void)
{
    int n = 41;
    int m = 3;
    int i;
    node *p = create(n);        //创建结点后返回原来头结点之后的第一个结点，即现在的头结点
    node *temp;                 //临时指针

    m %= n;

    while(p != p -> next)
    {
        for(i = 1; i < m - 1; i++)      //循环执行i次，指针指到要删除结点
        {
            p = p -> next;
        }

        printf("%d ->", p -> next -> data);     //就是相当于p的next的next即第三个结点删除

        temp = p -> next;                   //删除第m个结点
        p -> next = temp -> next;           //将要删除的结点的前一个结点指向要删除的结点的后一个结点

        free(temp);             //释放被删除的结点

        p = p -> next;          //p现在就指向要删除的结点的后一个结点
    }

    printf("%d\n", p -> data);      //输出最后一个结点

    return 0;
}