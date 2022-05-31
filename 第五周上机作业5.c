#include <stdio.h>

int main (void)
{
    int i, count = 0;

    for(i = 100; i <= 200; i++){
        if(i % 3 != 0){
            printf("%d", i);
            count++;
            printf(" ");
            if(count % 5 == 0){
                printf("\n");
            }
        }else {
            continue;
        }
    }
    
    return 0;
}