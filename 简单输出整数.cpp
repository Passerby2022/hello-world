#include <stdio.h>

void printN (int N);

int main (void)
{
    int N;
    
    scanf("%d", &N);
    printN(N);
    
    return 0;
}

void printN (int N)
{
    int i;
    
    for (i = 0; i < N; i++){
        printf("%d\n", i);
    }
    
}
