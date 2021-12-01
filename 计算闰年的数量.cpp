#include <stdio.h>

int main (void)
{
    int year1, year2, i = 0;

    printf("Enter a certain year: ");
    scanf("%d", &year1);
    printf("Enter a certain year: ");
    scanf("%d", &year2);

    for (year1; year1 <= year2; year1++){
        if(year1 % 4 == 0 && (year1 % 100 != 0 || year1 % 400 == 0)){
            i++;
            printf("%d  ", year1);
        }
    }

   printf("\n Number of leap year: %d", i);

    return 0;
}