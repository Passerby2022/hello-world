#include <stdio.h>

int main(void)
{
    int num, a, i;

    printf("Enter the number: ");
    scanf("%d", &num);
   // i = 1;
    /*do {
        a = num / i % 10;
        i *= 10;
        printf("%d", a);

    } while (i < num);*/
    /*while (i < num){
        a = num / i % 10;
        i *= 10;
        printf("%d", a);
    }*/
    for (i = 1;i < num;i *= 10){
        a = num / i % 10;
        printf("%d", a);
    }

    return 0;
}


