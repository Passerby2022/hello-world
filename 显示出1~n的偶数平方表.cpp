#include <stdio.h>

int main (void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    //i = 2;
    /*while (i * i <= n) {  
        printf("%10d\n", i * i);
        i += 2;
    }*/
    /*do {
        printf("%10d\n", i * i);
        i += 2;
    }while (i * i <= n);*/
    for (i = 2; i * i <= n; i += 2){
        printf("%10d\n", i * i);
    }


    return 0;
}