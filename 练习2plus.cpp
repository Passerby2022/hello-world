#include <stdio.h>

int main (void)
{
    int age, teenager;

    printf("Enter a number: ");
    scanf("%d", &age);

    if (age >= 13 && age <= 19)
      teenager = true;
    else 
      teenager = false;

    printf("Result: %d\n", teenager);

    return 0;
}