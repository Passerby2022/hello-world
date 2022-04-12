#include <stdio.h>

int main (void)
{
    int count = -1, i, sum, g, s;

    for(i = 100; i <= 1000; i++){
        s = i;
        sum = 0;
        while(s){
            g = s % 10;
            sum += g;
            s /= 10;
        }
        if(sum == 5){
            count++;
            if(count % 5 == 0){
                printf("\n");
            }
            printf("%5d", i);
        }
    }

    return 0;
}