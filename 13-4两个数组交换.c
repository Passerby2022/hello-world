#include <stdio.h>

int t;
#define swap(a, b) t = a, a = b, b = t

int main (void)
{
    int a[3] = {4, 5, 6};
    int b[3] = {1, 2, 3};
    int i;

    for(i = 0; i < 3; i++)
    {
        swap(a[i], b[i]);
    }

    for(i = 0; i < 3; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }

    printf("\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d", b[i]);
        printf(" ");
    }

    return 0;
}