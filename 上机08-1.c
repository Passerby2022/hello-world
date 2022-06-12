#include <stdio.h>
#include <string.h>

void str (char *a, char *b)
{
    printf("%s", strcat(a, b));
}

int main (void)
{
    int n;
    char a[10];
    char b[10];

    gets(a);
    gets(b);

    str(a,b);

    return 0;
}