#include <stdio.h>

int main (void)
{
    int i, sum = 0;
    int a[40];
    int count = 0;

    for(i = 1; i < 40; i++){
        a[0] = 1;
        a[1] = 1;

        if(i == 1){
            printf("%-8d", a[0]);
            printf(" ");
            count++;
            printf("%-8d", a[1]);
            printf(" ");
            count++;
        }else{
            a[i] = a[i - 1] + a[i - 2];
            printf("%-8d", a[i]);
            count++;
            printf(" ");
        }

        if(count % 4 == 0){
            printf("\n");
        }
    }

    return 0;
}