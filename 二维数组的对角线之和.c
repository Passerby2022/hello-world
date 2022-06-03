#include <stdio.h>

int main (void)
{
    int a[3][3];
    int sum = 0;
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            scanf("%d", a[i] + j);    
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            if(i == j){
                sum += a[i][j];
            }
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            if(i + j == 2){
                sum += a[i][j];
            }
        }
    }
    
    printf("%5d", sum);

    return 0;
}