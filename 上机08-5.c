#include <stdio.h>
#include <string.h>

int str(char *p)
{
    int length;
    length = strlen(p);
    return length;
}

int main (void)
{
    char p[50];
    gets(p);
    int length = str(p);
    printf("%d", length);
    return 0;
}