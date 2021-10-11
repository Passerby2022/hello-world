/* Computes a European Article Number check digit */

#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m;

    printf("Enter a number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    
    m = 3 * (b + d + f + h + j + l) + (a + c + e + g + i + k);

    printf("Check digit: %d\n", 9 - (m - 1) % 10);

    return 0;
}