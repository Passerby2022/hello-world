#include <stdio.h>

int main (void)
{
    int n, count;
    double sum;

    scanf("%d", &n);

    if(n > 10000){
        count = 0;
    }else if(n >= 5000){
        count = 1;
    }else if(n >= 2000){
        count = 2;
    }else {
        count = 3;
    }

    switch(count){
        case 0:
            sum = 500 + n;
            break;
        case 1:
            sum = 500 + n * (0.08 + 1);
            break;
        case 2:
            sum = 500 + n * (0.1 + 1);
            break;
        case 3:
            sum = 500 + n * (0.12 + 1);
            break;
    }

    printf("%f", sum);

    return 0;
}