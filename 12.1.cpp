#include <stdio.h>

#define N 100

int main (void)
{
    char ch, a[N], *p;
    int i = 0;

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n'){
        a[i] = ch;
        i++;
    }

    i--;
    printf("Reversal is: ");
    for (p = &a[i]; p >= &a[0]; p--){
        printf("%c", *p);
    }

    return 0;
}