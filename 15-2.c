#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *p;
    int i, j;
    int n, m;

    printf("Enter two number\n");
    scanf("%d%d", &n, &m);
    p = (int *) calloc (n * m, sizeof(int));
    //p = (int *) malloc (n * m * sizeof(int));
    printf("input\n");
    for(i = 0; i < n * m; i++)
    {
            scanf("%d", p + i);
    }

    for(i = 0; i < n * m; i++)
    {
        if(i % m == 0){
            printf("\n");
        }
        printf("%d", *(p + i));
        printf(" ");
    }

    free(p);
    return 0;
}