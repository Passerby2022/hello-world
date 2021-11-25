#include <stdio.h>

#define N 5

int main (void)
{
    int i, digit_seen[N][N], j;//digit_seen[N][N]是二维数组 <=> digit_seen[N][N] is Two-dimensional array

    for (i = 0; i < N; i++){
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < N ; j++){
            scanf("%d", &digit_seen[i][j]);
        }
    }

    int sum;

    printf("Row totals: ");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            sum += digit_seen[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\nColumn totals: ");
    for (j = 0; j < N; j++){
        for (i = 0; i < N; i++){
            sum += digit_seen[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}