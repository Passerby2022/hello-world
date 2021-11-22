#include <stdio.h>

int main (void)
{
    int num, i, res = 1;

    printf("Enter a positive integer: ");
    scanf("%f", &num);

    for (i = 1; i <= num ; i++){
        res *= i;
    }

    printf("Factorial of %f: %f", num, res);

    return 0;
}