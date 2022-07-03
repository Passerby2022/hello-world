#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct sqStack
{
    double *top;
    double *base;
    int Stacksize;
};

void Create (struct sqStack *s)
{
    s -> base = (double *) malloc(20 * sizeof(double));
    if(!(s -> base)){
        exit(0);
    }
    s -> top = s -> base;
    s -> Stacksize = 20;
}

void Push (struct sqStack *s, double num)
{
    if(s -> top - s -> base >= s -> Stacksize){
        s -> base = (double *) realloc(s -> base, sizeof(double) * (10+ s -> Stacksize));
        if(!(s -> base)){
            exit(0);
        }
    }
    *(s -> top) = num;
    s -> top++;
}

void Pop (struct sqStack *s, double *num)
{
    if(s -> top == s -> base){
        return;
    }
    *num = *--(s -> top);
}

int main (void)
{
    struct sqStack s;
    char c;
    double n, m, num, sum;
    char str[10];       //定义一个缓冲区，把没有遇到空格的时候的输入串成一个数
    int i = 0;

    Create(&s);

    printf("请按照逆波兰表达式输入待计算数据,数据与运算符之间用空格隔开,以#作为结束标志\n");
    scanf("%c", &c);

    while(c != '#')
    {
        //用于过滤数字，剩下的就是操作符
        while(isdigit(c) || c == '.')       //双精度浮点数有小数点，也要将小数点作为判断的条件
        {
            str[i++] = c;       //没有初始化为0的时候需要把下一个数据初始化为0
            str[i] = '\0';
            if(i >= 10){
                printf("出错:输入的单个数据过大!\n");
                return -1;
            }
            scanf("%c", &c);        //再次输入
            if(c == ' '){           //如果判断的是空格的话，表面我们的数字已经输入结束了
                num = atof(str);      //将字符串转化为双精度浮点数
                //如果遇到数字就入栈，遇到运算符就弹出栈
                Push(&s, num);
                i = 0;              
                break;              //数字输入结束之后跳出while循环
            }
        }

        switch(c)
        {
            case '+':
                Pop(&s, &n);
                Pop(&s, &m);
                Push(&s, m + n);
                break;
            case '-':
                Pop(&s, &n);
                Pop(&s, &m);
                Push(&s, m - n);
                break;
            case '/':
                Pop(&s, &m);
                Pop(&s, &n);
                Push(&s, m / n);
                break;
            case '*':
                Pop(&s, &n);
                Pop(&s, &m);
                if(n != 0){
                    Push(&s, m *  n);
                }else{
                    printf("\n出错:除数为零!\n");
                    return -1;
                }
                break;
        }

        scanf("%c", &c);
    }

    Pop(&s, &sum);
    printf("最终的计算结果为:%f\n", sum);

    return 0;
}