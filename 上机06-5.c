#include <stdio.h>
int fac (int n)
{
    static int i = 1;
    i = i * n;
    return i;
}

int main (void)
{
    int i;
    printf("enter\n");
    for(i = 1; i <= 5; i++)
    {
        printf("%d! = %d\n", i, fac(i));
    }
    return 0;
}