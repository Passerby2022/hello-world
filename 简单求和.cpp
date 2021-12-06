#include <stdio.h>

int Sum (int List[], int N);

int main (void)
{
    int MAXN, List[MAXN], N, i;

    printf("Enter a number: ");
    scanf("%d", &MAXN);
    printf("Enter a digits: ");
    scanf("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf("%d", &List[i]);
    }

    printf("%d\n", Sum(List, N));

    return 0;
}

int Sum (int List[], int N)
{
    int j, result;

    for (j = 0; j < N; j++){
        List[j] = List[j - 1] + List[j];
        result = List[j];
        //result += Lsit[j];
    }

    return result;
}
