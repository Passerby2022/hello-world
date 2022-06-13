#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sort(char (*a)[5])
{
    char *temp;
    int i, j;

    for( i = 1; i < 3; i++)
    {
        for( j = 3 - 1; j >= i; j--)
        {
            if(strcmp(*(a + j - 1), *(a + j)) > 0){
                strcpy(temp,*(a + j));
                strcpy(*(a + j), *(a + j - 1));
                strcpy(*(a + j - 1), temp);
            }
        }
    }

    for(i = 0; i < 3; i++)
    {
        printf("%s\n", *(a + i));
    }
}

int main (void)
{
    char a[3][5];
    char (*p)[5];

    for(int i = 0; i < 3; i++){
        scanf("%s", a + i);
    }
    
    p = a;
    Sort(p);
    return 0;
}