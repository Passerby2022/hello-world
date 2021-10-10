#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, f, n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    a = n % 8;
    b = (n / 8) % 8;
    c = ((n / 8) / 8) % 8;
    d = (((n / 8) / 8) / 8) % 8;
    e = ((((n / 8) / 8) / 8) / 8) % 8;
    
   
    f = e * 10000 + d * 1000 + c * 100 + b * 10 + a;

    printf("Tm octal, your number is: %.5d", f);

    return 0; 
}