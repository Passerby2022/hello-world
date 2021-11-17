#include <stdio.h>

int main (void)
{
    int hours, minute, sums, i, num;
    char ch1, ch2;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d%c%c", &hours, &minute, &ch1, &ch2);
    printf("Number of times entered: ");
    scanf("%d", &num);

    i = 0;
    
    for (i = 0;i <= num; i++){
        if (hours <= 12){
        sums = 12 + hours;
        printf("Equivalent 24-hours time: %d:%d\n", sums, minute);
        printf("Enter a 12-hour time: ");
        scanf("%d:%d%c%c", &hours, &minute, &ch1, &ch2);
        }
    }


    return 0;
}