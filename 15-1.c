#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *p;
    int i;

    p = (int*) malloc(sizeof(int) * 3);
    for(i = 0; i < 3; i++)
    {
        scanf("%d", p + i);
    }

    for(i = 0; i < 3; i++)
    {
        printf("%d\n", *(p + i));
    }

    free(p);

    return 0;
}