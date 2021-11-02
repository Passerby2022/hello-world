#include <stdio.h>

int main (void)
{
    int m, n, result;

    printf("Enter a number: ");
    scanf("%d%d", &m, &n);
    
   /* while (n != 0) {
        result = n;
        n = m % n;
        m = result;
    }*/
    
   while (n != 0){
        result = m % n;
        m = n;
        n = result;

   }
    printf("Greatest common divisor: %d", m);
    return 0;

}