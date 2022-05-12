#include <stdio.h>

int main (void)
{
    int x, y;
    int number1, number2;
    printf("Enter two number\n");
    scanf("%d %d", &x, &y);

    number1 = x & y;
    printf("%d\n", number1);

    printf("Enter two number\n");
    scanf("%d %d", &x, &y);

    number2 = x | y;
    printf("%d\n", number2);

    return 0;
}