#include <stdio.h>

int main (void)
{
    int i;
    float n;
    float sum = 0.0;
    for(i = 0; i <= 1000; i++){
        printf("Donated Amount\n");
        scanf("%f", &n);
        sum += n;
        if(sum >= 10000){
            break;
        }
    }
    printf("%.2f\n", sum);
    return 0;
}