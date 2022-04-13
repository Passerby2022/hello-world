#include <stdio.h>

int main (void)
{
    char ch;
    char ch1;

    puts("Enter a lowercase");
    ch = getchar();
    ch1 = ch - 32;
    putchar(ch1);
    printf("\n");
    printf("%d", ch1);

    return 0;
}