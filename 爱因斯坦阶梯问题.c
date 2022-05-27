#include <stdio.h>

int main (void)
{
    int i;

    for(i = 100; i < 1000; i++){
        if((i % 7 == 0) && (i % 6 == 5) && (i % 5 == 4) && (i % 3 == 2) && (i % 2 == 1)){
            printf("the number of the stairs is %d\n", i);
        }
    }

    return 0;
}