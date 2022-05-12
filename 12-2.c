#include <stdio.h>

int main (void)
{
    int x, y;
    int result;
    printf("Enter two number\n");
    scanf("%d %d", &x, &y);

    result = x << y;
    printf("%d\n", result);
    printf("Enter two number\n");
    scanf("%d %d", &x, &y);

    result = x >> y;
    printf("%d\n", result);

    return 0;
}