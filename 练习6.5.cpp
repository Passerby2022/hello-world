/* Print in reverse order */

#include <stdio.h>

int main (void)
{
    int number, a, b, c;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);


    if (number > 1000)
        do {
        b = number % 1000;
        a = number / 1000;
        printf("The reversal is: %d\n", c = b * 10 + a);
        break;
    }while (number != 0);

    else if (number > 100)
        do {
        b = number % 100;
        a = number / 100;
        printf("The reversal is: %d\n", c = b * 10 + a);
        break;
    }while (number != 0);

    else if (number > 10)
        do {  
        b = number % 10;
        a = number / 10; 
        printf("The reversal is: %d\n", c = a * 10 + b);
        break;
    }while (number != 0);
    
    return 0;
}