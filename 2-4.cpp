#include <stdio.h>

int main (void)
{
    int a, b, i;

    scanf("%d%d", &a, &b);

    if (a >= b){
        for (int i = b; i >= 1; i--){
            if (a % i == 0 && b % i == 0){
                printf("MAX%d", i);
                break;
            }
        }
    }else {
        for (int j = a; j >= 1; j--){
            if(a % j == 0 && b % j == 0){
                printf("MAX%d", j);
                break;
            }
        }
    }
    return 0;
}