#include <stdio.h>
#include <string.h>

void STRCPY(char *a, char *b);

int main (void)
{
    char *p, *q;
    char a[10], b[10];

    printf("Input string\n");
    gets(a);

    p = a;
    q = b;
    STRCPY(p, q);

    return 0;
}

void STRCPY(char *a, char *b)
{
    printf("%s", strcpy(b, a));
}