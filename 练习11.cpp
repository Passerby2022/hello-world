#include <stdio.h>

int main (void)
{
    float a, b, c, d, e, f, g, h;
    
    a = 20000.00;
    b = 6.0;
    c = 386.66;

    d = 6.0f/100.0f/12.0f;


    e = a - c + a * d;
    f = e - c + (e - c) * d;
    g = f - c + (f - c) * d;

    printf("Balance remaining after first payment: %.2f\n", e);
    printf("Balance remaining after second payment: %.2f\n", f);
    printf("Balance remaining after third payment: %.2f\n", g);

    return 0;
}