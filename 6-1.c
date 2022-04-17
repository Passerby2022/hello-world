#include <stdio.h>

int main (void)
{
    int iDay = 0;

    printf("Enter a day of week to get course\n
    ");
    scanf("%d", &iDay);

    switch(iDay){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Havbe a meeting in the company\n");
            break;
        case 6:
            printf("Go shopping with friends\n");
            break;
        case 7:
            printf("At home with families\n");
            break;
        default:
            printf("Working with partner\n");
            break;
    }

    return 0;
}