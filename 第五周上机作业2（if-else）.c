#include <stdio.h>

void PAY(int n);

int main (void)
{
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    PAY(n);

    return 0;
}

void PAY(int n)
{
    float sum;
    if(n > 10000){
        sum = 500 * (1 + 0.12);
    }else if(n > 5000){
        sum = 500 * (1 + 0.1);
    }else if(n > 2000){
        sum = 500 * (1 + 0.08);
    }else{
        sum = 500;
    }

    printf("%.2f", sum);
}