#include <stdio.h>

int main (void)
{
    int a;

    scanf("%d", &a);

    printf("%d", a += a *= a /= a - 6);

    return 0;
}