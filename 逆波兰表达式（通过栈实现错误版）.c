#include <stdio.h>
#include <stdlib.h>

struct sqStack
{
    int *top;
    int *base;
    int Stacksize;
};

void Create (struct sqStack *s)
{
    s -> base = (int *) malloc(20 * sizeof(int));
    if(!(s -> base)){
        exit(0);
    }
    s -> top = s -> base;
    s -> Stacksize = 20;
}

void Pop (struct sqStack *s, int num)
{
    if(s -> top - s -> base >= s -> Stacksize){
        s -> base = (int *) realloc(s -> base, sizeof(int) * (10+ s -> Stacksize));
        if(!(s -> base)){
            exit(0);
        }
    }
    *(s -> top) = num;
    s -> top++;
}

void Push (struct sqStack *s, int *num)
{
    if(s -> top == s -> base){
        return;
    }
    *num = *--(s -> top);
}

int Length (struct sqStack s)
{
    return (s.top - s.base);
}

int main (void)
{
    struct sqStack s;
    int i;
    int num1, n;
    int num2, m;
    int sum = 0.0;
    char c, flag;

    Create(&s);

    printf("Input(y/n):");
    scanf("%c", &flag);
    printf("Enter a number:\n");
    scanf("%d", &num1);
    getchar();
    printf("Enter a number:\n");
    scanf("%d", &num2);
    getchar();
    printf("Input string\n");
    scanf("%c", &c);
    getchar();

    while(flag != 'n' && flag != 'N')
    {   
        Pop(&s, num1);
        Pop(&s, num2);
        
        switch(c)
        {
            case '-':
                Push(&s, &m);
                Push(&s, &n);
                sum = n - m;
                Pop(&s, sum);
                break;
            case '+':
                Push(&s, &m);
                Push(&s, &n);
                sum = n + m;
                Pop(&s, sum);
                break;
            case '/':
                Push(&s, &m);
                Push(&s, &n);
                sum = n / m;
                Pop(&s, sum);
                break;
            case '*':
                Push(&s, &m);
                Push(&s, &n);
                sum = n * m;
                Pop(&s, sum);
                break;
        }
        
        printf("Input(y/n):");
        scanf("%c", &flag);
        getchar();

        if(flag != 'n' && flag != 'N'){
            printf("Enter a number:\n");
            scanf("%d", &num1);
            getchar();
            printf("Enter a number:\n");
            scanf("%d", &num2);
            getchar();
            printf("Input string\n");
            scanf("%c", &c);
            getchar();
        }else{
            printf("Input string\n");
            scanf("%c", &c);
            getchar();

            switch(c)
            {
                case '-':
                    Push(&s, &m);
                    Push(&s, &n);
                    sum = n - m;
                    Pop(&s, sum);
                    break;
                case '+':
                    Push(&s, &m);
                    Push(&s, &n);
                    sum = n + m;
                    Pop(&s, sum);
                    break;
                case '/':
                    Push(&s, &m);
                    Push(&s, &n);
                    sum = n / m;
                    Pop(&s, sum);
                    break;
                case '*':
                    Push(&s, &m);
                    Push(&s, &n);
                    sum = n * m;
                    Pop(&s, sum);
                    break;
            }
        }

        printf("Input(y/n):");
        scanf("%c", &flag);
        getchar();
    }

    Push(&s, &sum);
    printf("%d", sum);

    return 0;
}