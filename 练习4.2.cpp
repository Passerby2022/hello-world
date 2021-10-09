#include <stdio.h>

int main (void)
{
    int a, b, c, d, n;

    printf("Enter a two-digit number: ");
    scanf("%3d", &n);

    a = n % 10;
    b = n % 10;
    c = n / 100;
    d = a * 100 + b * 10 + c;

    printf("The reversal is: %d", d);

    return 0;


}