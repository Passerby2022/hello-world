/* Personal income tax borne by residents */
#include <stdio.h>

float a (float n);

int main (void)
{
    float income;

    printf("Enter your income: ");
    scanf("%f", &income);

    printf("%.2f", a(income));

    return 0;
}

float a (float n)
{
    float taxes;

    if (n < 750){
      taxes = n * 0.01;
    }else if (n < 2250){
      taxes = (n - 750) * 0.02 + 7.50;
    }else if (n < 3750){
      taxes = (n - 2250) * 0.03 + 37.50;
    }else if (n < 5250){
      taxes = (n - 3750) * 0.04 + 82.50;
    }else if (n < 7000){
      taxes = (n - 5250) * 0.05 + 142.50;
    }else {
      taxes = (n - 7000) * 0.06 + 230.00;
    }    

    return taxes;
}
