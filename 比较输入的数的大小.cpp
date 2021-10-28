#include <stdio.h>

int main(void)
{
    double max = 0, n;

    do {
        printf("Enter a number:");
        scanf("%lf", &n);
        
        if(max < n){
            max = n;
        }else
        max = max;

        //max = max < n ? n : max;

    } while (n > 0.0);

    printf("The largest number entered was: %f", max);

    return 0;
}



