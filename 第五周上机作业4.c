#include <stdio.h>

int SUSU(int num);

int main (void)
{
    int i;
    int n, m, k;
    int count;

    for(i = 0; i <= 1000; i++){
        if(SUSU(i) != 0 && i >= 10){
            k = i;
            while(k){
                m = k % 10;
                k /= 10;
            }
            if(m == i % 10){
                printf("%d", i);
                printf(" ");
            }
        }
    }

    return 0;
}

int SUSU(int num)
{
    if(num < 2){
        return 0;
    }
    if(num == 2){
        return 1;
    }

    int i;

    for(i = 2; i <= 1000; i++){
        if(num % i == 0){
            return 0;
        }else if(num != i + 1){
            continue;
        }else{
            return 1;
        }
    }
}