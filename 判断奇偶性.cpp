#include <stdio.h>

int even (int n);

int main (void)
{
    int n;

    scanf("%d", &n);
    if (even(n)){
        printf("%d is even.\n", n);
    }else {
        printf("%d is odd.\n", n);
    }

    return 0;
}

int even (int n)
{
    int num;

    if(n >= 0){
        num = n;
    }else if (n < 0){
        num = -n;
    }

    while (num >= 0){
        num %= 2;
        if (num == 0){
            return 1;
        }else {
            return 0;
        }
    }
    /*if (num % 2 == 0){
        return 1;
    }else {
        return 0;
    }*/
}