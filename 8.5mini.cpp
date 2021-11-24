/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main (void)
{
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");//输入利率
    scanf("%d", &low_rate);
    printf("Enter number of years: ");//输入有多少年
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++){
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;//INITIAL_BALANCE初始余额
    }

    printf("\n");

    for (year = 1; year <= num_years; year++){
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++){
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}