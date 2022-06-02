#include <stdio.h>

int main (void)
{
    int i, j, k;
    int count = 0;

    for(i = 1; i < 10; i++){
        for(j = 1; j < 10; j++){
            for(k = 1; k < 10; k++){
                if((i * 100 + j * 10 + k) == i * i * i + j * j * j + k * k * k){
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}