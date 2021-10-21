/* Displays the maximun non negative number that has been entered */

#include <stdio.h>

int main (void)
{
    float num, max;
    printf("Enter a number: ");
    scanf("%f", &num);

    for(; num > max; ){
        if (num > max)
            max = num;
        printf ("Enter a number: ");
        scanf("%f", &num);
    }
    
    printf("The largest number entered was %.2f", max);
    

    return 0;
}
