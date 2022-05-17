#include <stdio.h>

int t;
#define swap(a,b) t = a, a = b, b = t 

int main (void)
{
    int a, b;

    printf("enter\n");
    scanf("%d %d", &a, &b);

    swap(a,b);

    printf("%d %d", a, b);

    return 0;
}