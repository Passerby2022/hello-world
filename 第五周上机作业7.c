#include <stdio.h>

int main (void)
{
    int i, j, k;
    int count = 0;

    for(i = 1; i < 5; i++){
        k = i;
        for(j = 0; j < 5; j++){
            printf("%-5d", k);
            count++;
            printf(" ");
            if(count % 5 == 0){
                printf("\n");
            }
            k += i;
        }
    }

    return 0;
}