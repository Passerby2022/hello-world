/* Show maximum divisor */

#include <stdio.h>

int main (void)
{
    int m, n, remainder;

    printf("Enter two intergers: ");
    scanf("%d%d", &m, &n);

    for ( ;n != 0; ){
      remainder = m % n;
      m = n;
      n = remainder;
    }

    printf("Greatest common divisor: %d", m);
    
    return 0;  
}