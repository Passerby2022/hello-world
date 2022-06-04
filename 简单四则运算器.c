#include <stdio.h>

int main (void)
{
    int number;
    float result;
    float a, b;

    printf("number < 4 && number >= 0\n");
    scanf("%d", &number);
    printf("Enter two number\n");
    scanf("%f %f", &a, &b);

    switch(number){
        case 0:
            result = a + b;
            break;
        case 1:
            result = a - b;
            break;
        case 2:
            result = a * b;
            break;
        case 3:
            result = a / b;
            break;
        default:
            printf("Error");
    }

    printf("%f", result);

    return 0;
}