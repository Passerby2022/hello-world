#include <stdio.h>

int main (void)
{
    int i, frequency;
    float num1, num2;

    printf("Enter the number of comparisons :");
    scanf("%d", &frequency);

    for (i = 0; i < frequency; i++){
        printf("\nEnter two numbers: ");
        scanf("%f %f", &num1, &num2);
        if (num1 < num2){
            printf("The maximum the two number is: %f", num2);
        }else if (num1 > num2){
            printf("The minimum the two number is: %f", num2);
        }else {
            printf("These two numbers are equal: %f", num1);
        }
    }

    return 0;
}