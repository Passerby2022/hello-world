#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, R1, R2, R3, R4, C1, C2, C3, C4, D1, D2;

    
    printf("Enter the numbers form 1 to 16 in any other: ");
    scanf("%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("%2d\t%2d\t%2d\t%2d\n", a, b, c, d);
    printf("%2d\t%2d\t%2d\t%2d\n", e, f, g, h);
    printf("%2d\t%2d\t%2d\t%2d\n", i, j, k, l);
    printf("%2d\t%2d\t%2d\t%2d\n", m, n, o, p);

    R1 = a + b + c + d;
    R2 = e + f + g + h;
    R3 = i + j + k + l;
    R4 = m + n + o + p;
    C1 = a + e + i + m;
    C2 = b + f + j + n;
    C3 = c + g + k + o;
    C4 = d + h + l + p;
    D1 = a + f + k + p;
    D2 = d + g + j + m; 

    printf("Row sums: %2d %2d %2d %2d\n", R1, R2, R3, R4);
    printf("Column sums: %2d %2d %2d %2d\n", C1, C2, C3, C4);
    printf("Diagonal sums: %2d %2d\n", D1, D2 );

    return 0;
}
