#include <stdio.h>

#define area(base, high) ((base) * (high))

int main (void)
{
    int base;
    int high;

    printf("enter\n");
    scanf("%d %d", &base, &high);

    printf("%d", area(base, high));

    return 0;
}