#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Sort(char *p[3], int n)
{
    char *temp;
    int i, j;
    for( i = 1; i < n; i++)
    {
        for( j = n - 1; j >= i; j--)
        {
            if(strcmp(p[i - 1], p[i]) > 0){
                strcpy(temp, p[i]);
                strcpy(p[i], p[i - 1]);
                strcpy(p[i - 1], temp);
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
}

int main (void)
{
    char *p[3];
    char *temp;
    int i;
    temp = (char *) malloc(sizeof(char) * 3);

    for(i = 0; i < 3; i++)
    {
        p[i] = (char *) malloc(sizeof(char) * 3);
        gets(temp);
        if(strlen(temp) == 0){
            free(p[i]);
            break;
        }
        strcpy(p[i], temp);
    }

    free(temp);
    Sort(p, 3);

    return 0;
}