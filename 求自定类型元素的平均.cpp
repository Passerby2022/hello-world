#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average (ElementType S[], int N);

int main (void)
{
    ElementType S [MAXN];
    int N, i;

    printf("Enter a digits: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%f", &S[i]);
    }

    printf("%.2f\n", Average(S, N));

    return 0;
}

ElementType Average (ElementType S[], int N)
{
    int j; 
    float average = 0, sum = 0;
    //int i; 
    //ElementTpye sum;
    //ElementTpye average;

    for (j = 0; j < N; j++){
        sum += S[j];
        average = sum / N;
    }
    //average = sum / N;

    return average;
}
