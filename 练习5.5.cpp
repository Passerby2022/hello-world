/* Personal income tax borne by residents */
#include <stdio.h>

int main (void)
{
    int income;
    float taxes;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income < 750)
      taxes = income * 0.01;
    else if (income < 2250)
      taxes =(income - 750) * 0.02 + 7.50;
    else if (income < 3750)
      taxes =(income - 2250) * 0.03 + 37.50;
    else if (income < 5250)
      taxes =(income - 3750) * 0.04 + 82.50;
    else if (income < 7000)
      taxes =(income - 5250) * 0.05 + 142.50;
    else
      taxes =(income - 7000) * 0.06 + 230.00;
    
    printf("%.2f", taxes);
    
    return 0;
}