#include <stdio.h>

union Union 
{
    int number;
    char ch;
}rng;

int main (void)
{
    rng.number = 97;

    printf("%d\n", rng.number);
    printf("%c\n", rng.ch);

    rng.ch = 'A';

    printf("%d\n", rng.number);
    printf("%c\n", rng.ch);

    return 0;
}