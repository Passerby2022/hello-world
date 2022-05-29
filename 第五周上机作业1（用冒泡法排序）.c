#include <stdio.h>

void BIJIAO(int c[4]);

int main (void)
{
    int a[4], b[4];
    int i, j;

    printf("Input:\n");
    for(i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }

    BIJIAO(a);

    return 0;
}

void BIJIAO(int c[4])
{
    int temp, i, j;
    
    for(i = 1; i < 4; i++){
        for(j = 3; j >= i; j--){
            if(c[j] < c[j - 1]){
                temp = c[j - 1];
                c[j - 1] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i = 0; i < 4; i++){
        printf("%d", c[i]);
    }
}