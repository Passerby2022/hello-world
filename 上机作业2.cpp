#include <stdio.h>
#include <math.h>

int main (void)
{
    double x1, x2;
    int a, b, c, n;

    scanf("%d%d%d", &a, &b, &c);

    n = sqrt((b * b) - (4 * a * c));
    x1 = (-b + n) / (2 * a);
    x2 = (-b - n) / (2 * a);

    printf("%f %f", x1, x2);
    
    return 0;
}
