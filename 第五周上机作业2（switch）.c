#include <stdio.h>

void PAY(int count);

int main (void)
{
    int n, m, count, k;

    printf("Enter a number\n");
    scanf("%d", &n);
    
    count = n / 1000;
    m = n %1000;
    n %= 10;
    
    if(n >= 0 && m > 0){
        count++;
    }

    PAY(count);

    return 0;
}
void PAY(int count)
{
    float sum;
    
    switch(count){
        case 1:
        case 2:
            sum = 500;
            break;
        case 3:
        case 4:
        case 5:
            sum = 500 * (1 + 0.08);
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            sum = 500 * (1 + 0.1);
            break;
        default:
            sum = 500 * (1 + 0.12);
            break;
    }

    printf("%.2f\n", sum);
}