#include <stdio.h>

int main (void)
{
    float money, rate, payment;

    printf("Enter amount of loan:");
    scanf("%f", &money);
    printf("Enter interest rate:");
    scanf("%f", &rate);
    printf("Enter monthly payment:");
    scanf("%f", &payment);

    int num;
    printf("Enter the number of repayments:(1~10):");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        printf("Balance remaining after");
        switch (i){
            case 1: printf("1st"); break;
            case 2: printf("2nd"); break;
            case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
            printf("%dth", i);
            break;
        }
    }
    printf("payment:%.2f\n", money = ((money - payment) + (money * rate * 0.01 / 12)));

    return 0;
}