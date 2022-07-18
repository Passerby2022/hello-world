#include <stdio.h>
#include <stdlib.h>

struct sqStack
{
    char *top;
    char *base;
    int size;
};

void Create (struct sqStack *s)
{
    s -> base = (char *) malloc(20 * sizeof(char));
    if(!s -> base){
        exit(0);
    }
    s -> top = s -> base;
    s -> size = 10;
}

void Push (struct sqStack *s, char e)
{
    if(s -> top - s -> base >= s -> size){
        s -> base = (char *) realloc(s -> base, sizeof(char) * (10 + s -> size));
        if(!s -> base){
            exit(0);
        }
    }
    *(s -> top) = e;
    s -> top++;
}

void Pop (struct sqStack *s, char *e)
{
    if(s -> top == s -> base){
        return;
    }
    *e = *--(s -> top);
}

int Length (struct sqStack s)
{
    return (s.top - s.base);
}

int main (void)
{
    struct sqStack s;
    char e, c;

    Create(&s);

    printf("请输入中缀表达式，以#作为结束标志：");
    scanf("%c", &c);

    //从左到右遍历输入
    while(c != '#')
    {   
        while(c >= '0' && c <= '9'){       //输入的是数字就直接显示出来
            printf("%c", c);
            scanf("%c", &c);
            if(c < '0' || c > '9'){
                printf(" ");
            }
        }
        
        if(c == ')'){     //如果是右括号就弹栈
            Pop(&s, &e);
            while(e != '(')     //只要不等于左括号就显示出来再弹栈，直到弹出来的是左括号那么整个匹配过程结束
            {
                printf("%c ", e);
                Pop(&s, &e);
            }
        }else if(c == '+' || c == '-'){     //如果是符号的话就判断栈顶符号的优先级,如果是右括号或者是如果输入的符号低于等于栈顶符号的话，那么将栈顶元素依次出栈并且输出
            if(!Length(s)){      //如果栈为空的话就直接入栈
                Push(&s, c);
            }else{      //如果栈不为空的话
                do
                {
                    Pop(&s, &e);        //栈顶元素出栈
                    if(e == '('){       //如果是左括号的话直接入栈
                        Push(&s, e);        
                    }else{
                        printf("%c ", e);       //如图杠不是左括号的话就显示出来
                    }
                }while(Length(s) && e != '(');       //判断一下栈是否为空或者栈顶元素是否为左括号
                Push(&s, c);            //符号优先级低的入栈
            }
        }else if(c == '(' || c == '/' || c == '*'){         //如果输入的符号是左括号或者是乘除号的话就入栈      
            Push(&s, c);
        }else if(c == '#'){     //过滤掉接收的#
            break;
        }else{      //如果上述情况都不符合的话
            printf("\n出错：输入格式错误！\n");
            return -1;
        }
        
        scanf("%c", &c);
    }

    while(Length(s))        //栈不为空的时候栈内的元素就依次从栈顶开始弹栈并显示出来
    {
        Pop(&s, &e);
        printf("%c", e);
    }
    return 0;
}