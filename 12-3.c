#include <stdio.h>

int left(unsigned value, int n)
{
    unsigned z;
    z = (value >> (32 - n)) | (value << n);
    return z;
}

int right(unsigned value, int n)
{
    unsigned z;
    z = (value << (32 - n)) | (value >> n);
    return z;
}

int main (void)
{
    unsigned z;
    int n;

    printf("Enter two number\n");
    scanf("%o %d", &z, &n);

    printf("%o\n", left(z, n));
    printf("%o\n", right(z, n));
    return 0;
}