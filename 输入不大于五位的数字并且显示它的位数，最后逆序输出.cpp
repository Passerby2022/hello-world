#include <stdio.h>

int main (void)
{
    int i, num, n, j;

    printf("Enter a number no greater than five digits: ");
    scanf("%d", &num);

    n = num;

    for(i = 1; i < 5 ;i++){
        if(num > 0){
        num /= 10;
        printf("Display number of digits:%d\n", i);
        }
    }
    for(i = 1;i < n; i *= 10){
        j = n / i % 10;
        printf("%d", j);
    }

    return 0;
}