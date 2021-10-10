/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l;

    printf("Enter a number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
    
    l = 3 * (a + c + e + g + i + k) + (b + d + f + h + j);

    printf("Check digit: %d\n", 9 - (l - 1) % 10);

    return 0;
}