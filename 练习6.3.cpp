/* Divide a number into the simplest fractior */

#include <stdio.h>

int main (void)
{
    int n, m, remainder, result1, result2, demon, num;

    printf("Rnter a fraction: ");
    scanf("%d/%d", &num, &demon);

    n = demon;
    m = num;

    for ( ;n != 0; ){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    demon = demon / m;
    num = num / m;

    printf("In lowest terms: %d/%d", num, demon);

    return 0;


}