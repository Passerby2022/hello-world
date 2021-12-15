#include <stdio.h>

int Factorial (const int N);

int main (void)
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);

    if (NF) {
        printf("%d! = %d\n", N, NF);
    }else {
        printf("Invalid input\n");
    }

    return 0;
}

int Factorial (const int N)
{ 
    if (N < 0){
        return 0;
    }else if (N == 0){
        return 1;
    }

    int i, sum = 1;
    for (i = 1; i <= N; i++){
        sum *= i;
    }

    return sum;

/*  int i, sum = 1;
    if (N > 0 && N < 12){
        for (i = 1; i <= N; i++){
            sum *= i;
        }
        return sum;
    }
    else if (N == 0){
        return 1;
    }else {
        return 0;
    }
*/
}