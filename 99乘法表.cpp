#include <stdio.h>

int main (void)
{
    int n, i, a;

    //printf("Enter a number:");
    //scanf("%d", &n);

    for (i = 1; i <= 9; i++){
        for (a = 1; a <= i; a++){
            printf("%d*%d=%d\t",i ,a ,i * a);
        }
        printf("\n");
    }

    return 0;
}