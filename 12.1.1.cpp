#include <stdio.h>

#define N 100

int main (void)
{
    int i;
    char a[N];

    printf("Enter a message: ");

    for (i = 0; i < N ; i++){
        a[i] = getchar();
        if (a[i] == '\n'){
            break;
        }
    }

    printf("Reversal is : ");

    for (i-- ; i >= 0; i--){
        putchar(a[i]);
    }

    return 0;
}