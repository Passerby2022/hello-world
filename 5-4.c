#include <stdio.h>

int main (void)
{
    int sum, pay, add, commodity;

    scanf("%d %d", &pay, &commodity);

    add = commodity * 1.5;
    sum = add + pay;

    printf("%d", sum);

    return 0;
}