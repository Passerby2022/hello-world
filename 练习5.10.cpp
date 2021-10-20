/* Convering of grades to grades */

#include <stdio.h>

int main (void)
{
    int number, number1;

    printf("Enter numberical grade: ");
    scanf("%d", &number);

    number1 = number/10;

    switch (number1) {
        case 9: printf("A");
                break;
        case 8: printf("B");
                break;
        case 7: printf("C");
                break;
        case 6: printf("D");
                break;
        case 5: printf("F");
                break;
        default: printf("Illegal grade");
                 break;
    }

    return 0;
}