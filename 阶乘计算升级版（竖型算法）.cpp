#include <stdio.h>

void Print_Factorial (const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial (const int N)
{
    char a[3000];
    int alength = 1;
    a[0] = 1;

    if (N < 0){
        printf("Invalid input");
        return ;
    }

    for (int i = 2; i <= N; i++){
        int z = 0;
        for (int k = 0; k < alength; k++){
            int t = i * a[k] + z;
            a[k] = t % 10;
            z = t / 10;
        }
        while (z){
            a[alength++] = z % 10;
            z /= 10;
        }
    }
    for (int i = alength - 1; i >= 0; i--){
        printf("%d", a[i]);
    }
    printf("\n");
}