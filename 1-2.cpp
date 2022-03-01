#include <stdio.h>

int sum (float number1, float number2);

int main (void)
{
    float number1, number2, result;

    printf("Enter two number: ");
    scanf("%.1f%.1f", &number1, &number2);

    result = sum (number1, number2);

    printf("%.1f\n", result);

    return 0;
}

int sum (float number1, float number2)
{
    float sum;

    sum = number1 + number2;

    return sum;
}