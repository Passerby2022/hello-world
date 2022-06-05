#include <stdio.h>

int prime(int i);

int main (void)
{
    int i;
    int a[200];
    int count = 0;

    for(i = 100; i <= 200; i++)
    {
        if(prime(i) != 0){
            printf("%5d", i);
            count++;
            if(count % 5 == 0){
                printf("\n");
            }
        }
    }

    return 0;
}

int prime(int i)
{
    int j;

    for(j = 2; j <= 200; j++){
        if(i % j == 0){
            return 0;
        }else if(i != j + 1){
            continue;
        }else{
            return 1;
        }
    }
}