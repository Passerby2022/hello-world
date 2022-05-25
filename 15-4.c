#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *p;

    if((p = (int *) malloc(sizeof(int))) == 0){
        printf("no\n");
    }else {
        printf("ok\n");
    }

    return 0;
}