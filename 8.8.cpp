#include <stdio.h>

#define N 5

int main (void)
{
    int i, digit_seen[N][N], j;

    for (i = 0; i < N; i++){
        printf("Enter the student's %d five grades: ", i + 1);
        for (j = 0; j < N; j++){
            scanf("%d", &digit_seen[i][j]);
        }
    }
    printf("\n");

    int sum = 0;
    float average = 0.0f;

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            sum += digit_seen[i][j];
        }
        average = (float) sum / N;
        printf("The student's %d total grade and average score are %d and %.2f\n", i, sum, average);
        sum = 0;
    }

    printf("\n");

    int max, min;
    sum = 0;
    average = 0.0f;

    for (j = 0; j < N; j++){
        max = digit_seen[0][j];
        min = digit_seen[0][i];
        for (i = 0; i < N; i++){
            if (max < digit_seen[i][j]){
                max = digit_seen[i][j];
            }
            if (min > digit_seen[i][j]){
                min = digit_seen[i][j];
            }
            sum += digit_seen[j][i];
        }
        average = (float) sum / N;
        printf("Subject %d of average is %.2f, the highest score is %d, the;lowest score is %d\n", average, max, min);
        sum = 0;
    }
    return 0;
}