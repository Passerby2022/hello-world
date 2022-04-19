#include <stdio.h>
#include <string.h>

void STRCAT(char *a, char *b); 

int main (void)
{
    char *p, *q;
    char a[10], b[10];
    int n;

    printf("Rnter a number\n");
    scanf("%d", &n);
  
    printf("Input string\n");
    gets(a);                    //字符串输入
    gets(b);

    p = a;
    q = b;
    printf("Input string\n");
    read_line(a, n);
    printf("Input string\n");
    read_line(b, n);

    STRLEN(p, q);

    return 0;
}

void STRCAT(char *a, char *b)
{
    printf("%s", strcat(a, b));
} 
