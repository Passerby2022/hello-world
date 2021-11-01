#include <stdio.h>

int main (void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    //i = 1;

    /*while (i <= n){
        printf("%10d%10d\n", i, i * i);
        i++;
    }*/

    /*do {
        printf("%10d%10d\n", i, i * i);
        i++;
    }while (i <= n);*/

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i * i);
    }
        
        
    return 0;
}