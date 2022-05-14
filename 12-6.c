#include <stdio.h>

int main (void)
{
    int a[16];
    int i;
    printf("Enter a number\n");
    for(i = 15; i >= 0; i--)
    {
      scanf("%d", &a[i]);
    }

    for(i = 0; i < 4; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}