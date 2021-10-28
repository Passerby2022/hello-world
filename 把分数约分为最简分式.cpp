#include <stdio.h>

int main (void)
{
    int m, n, result, r1, r2, r3, r4;

    printf("Enter a number: ");
    scanf("%d/%d", &m, &n);
    
    r3 = m;
    r4 = n;

    while (r4 != 0){
        result = r3 % r4;
        r4 = r3;
        r4 = result;
    }

    r1 = m / r3;
    r2 = n / r3;
    
    printf("In lowest terms: %d/%d", r1, r2);

    return 0;
}