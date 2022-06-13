#include <stdio.h>

void sort(int *p, int n)
{
    int i, j;
    int temp = 0;

    for(j = 1; j < n; j++)
        for(i = n - 1; i >= j; i--)
        {
            if(*(p + i) < *(p + i - 1)){
                temp = *(p + i);
                *(p + i) = *(p + i - 1);
                *(p + i - 1) = temp;
            }
        }

    for(i = 0; i < n; i++)
    {
        printf("%d", *(p + i));
        printf(" ");
    }
}

int main (void)
{
    int n;
    int i;

    printf("Enter a length:");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    return 0;
}