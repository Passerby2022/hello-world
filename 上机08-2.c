#include <stdio.h>

void InsertAndSort (int *a, int num, int m, int n)
{
    int j, i;
    n = n + 1;

    for(j = n - 1; j >= m; j--)
    {
        a[j] = a[j - 1];
    }
    a[m] = num;

    for(j = 0; j < n; j++)
    {
        printf("%d", a[j]);
    }
    printf("\n");

    int temp = 0;

    for(i = 1; i < n; i++)
    {
        for(j = n - 1; j >= i; j--)
        {
            if(a[j] < a[j - 1]){
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp; 
            }
        }
    }

    for(j = 0; j < n; j++)
    {
        printf("%d", a[j]);
    }
}

int main (void)
{
    int n;
    int m;
    int num;

    printf("Enter a length: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Insert a number: ");
    scanf("%d", &num);
    printf("Insert location: ");
    scanf("%d", &m);

    InsertAndSort(a, num, m, n);

    return 0;
}