#include <stdio.h>

void transpose (int (*pointer)[3])
{
    int i, j;
    int flag = 0;
    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 3; i++)
        {
            printf("%d", pointer[i][j]);
            printf(" ");
            flag++;
            if(flag % 3 == 0){
                printf("\n");
            }
        }
    }
}

int main (void)
{
    int pointer[3][3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &pointer[i][j]);
        }
    }

    transpose(pointer);

    return 0;
}