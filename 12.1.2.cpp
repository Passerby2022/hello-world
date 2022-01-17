#include <stdio.h>

#define N 100

int main (void)
{
    char a[N], *p;

    printf("Enter a  message: ");

    for (p = &a[0]; p < &a[N]; p++){
        *p = getchar();
        if (*p == '\n'){
            break;
        }
    }

    printf("Reversal is : ");

    for (p-- ; p >= &a[0]; p--){
        putchar(*p);
    }

    return 0;
}