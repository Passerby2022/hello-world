#include <stdio.h>

int main (void)
{
    int i, n;

    n = 100;

    while(n <= 200){
        for(i = 2; i < n; i++){
            if(n % i == 0){
               break;
            }
        }
        if (i >= n){
            printf("%d is a prime\n", n);
        }else {
            printf("%d is not a prime\n", n);
        }
        n++;
    }
    return 0;
}