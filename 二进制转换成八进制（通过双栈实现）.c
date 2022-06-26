#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct sqStack
{
    char *base;
    char *top;
    int sizeStack;
};

//栈的初始化
void InitStack (struct sqStack *s)
{
    s -> base = (char *) malloc(20 * sizeof(char));     //为栈分配内存

    if(!s -> base){     //分配失败则返回
        return;
    }

    s -> top = s -> base;       //栈顶和栈底处于同一个位置
    s -> sizeStack = 20;        //栈的最大容量
}

void Push (struct sqStack *s, char e)
{
    if(s -> top - s -> base >= s -> sizeStack){     //如果栈已经满了，就应该为栈扩容
        s -> base = (char *) realloc(s -> base, (s -> sizeStack + 10) * sizeof(char));      //为栈分配新的内存空间
        if(!s -> base){     //分配失败则返回
            exit(0);        //结束当前进程
        }
    }
    *(s -> top) = e;        //把e的值赋值给s -> top
    s -> top++;             //栈顶自增
}

void Pop (struct sqStack *s, char *e)
{
    if(s -> top == s -> base){
        return;             //如果为空栈则返回
    }
    *e = *--(s -> top);     //取出栈中的值
}

int StackLen (struct sqStack s)
{
    return (s.top - s.base);        //返回栈的当前容量
}

int main (void)
{
    char c;
    struct sqStack s;
    struct sqStack p;
    int len, i, sum = 0;
    int j;

    InitStack(&s);
    InitStack(&p);          //初始化第二个栈

    printf("Enter a number,enter '#' is over\n");       
    scanf("%c", &c);        //输入要进入栈的数据
    while(c != '#')     
    {
        Push(&s, c);        //将数据存入栈
        scanf("%c", &c);        //输入要进入栈的数据
    }
    getchar();      //把'\n'从缓冲区去掉

    len = StackLen(s);      //栈的长度
    printf("%d\n", len);

    for(i = 0; i < len; i+=3) 
    {   
        for(j = 0; j < 3; j++)
        {
            Pop(&s, &c);        //从栈中逐个取出数字
            sum = sum + (c - 48) * pow(2, j);       //调用pow函数，功能是返回x的y次幂
            if(s.top == s.base){
                break;
            }
        }

        Push(&p, sum + 48);
        sum = 0;
    }

    printf("转化为八进制数是：\n");

    while(p.top != p.base)
    {   
        Pop(&p, &c);
        printf("%c", c);
    }

    return 0;
}