#include <stdio.h>

int main (void)
{
    int a, b, c, d;

    printf("Enter a two_digit number: ");
    scanf("%2d", &c);

    a = c / 10;
    b = c % 10;
    d = b * 10 + a;

    printf("The reversa; is: %d", d);

    return 0;
}
