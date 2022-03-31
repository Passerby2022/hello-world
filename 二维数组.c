#include <stdio.h>

int main (void)
{
    int a[3][5], i, j;//, (*p)[5];
    //p = &a[0];
    printf("please input:\n");
    for(i = 0; i < 3; i++){
        for(j = 0 ; j < 5; j++){
            //scanf("%d", (*(p + i) + j));
            scanf("%d", &(a[i])+j);
        }
    }
    //p = &a[0];
    printf("the array is:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            //printf("%5d", *(*(p+i)+j));
            printf("%d", ((a[i])+j));
        }
    printf("\n");
    }
}