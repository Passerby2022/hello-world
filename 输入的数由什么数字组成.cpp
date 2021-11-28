#include <stdio.h>

int main(void)
{
    int digit_count[10] = { 0 };
    int digit;
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;
        digit_count[digit]++;
        num /= 10;
    }

    printf("Repeated digit(s): ");
    for (digit = 0; digit <= 9; digit++) {
        if (digit_count[digit] > 0) {
            printf("%2d", digit);
        }
    }

    printf("\n");

    return 0;
}

