#include <stdio.h>

int largest (int a[], int n);

int main (void)
{
    int number, j;
    int a[number];

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter %d number to be sorted: ");
    for (j = 0; j < number; j++){
        scanf("%d", &a[j]);
    }

    printf("Largest element: %d", largest(a, number));

    return 0;
}

int largest (int a[], int n)
{
    int i, max = a[0];

    for (i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }

    return max;
}
