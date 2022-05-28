#include <stdio.h>

int main (void)
{
    int a[5], b[5];
    int i, j;
    int temp;
    
    printf("enter\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(j = 4, i = 0; j >= 0; j--, i++)
    {
        temp = a[i];
        b[j] = temp;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d", b[i]);
        printf(" ");
    }

    return 0;
}