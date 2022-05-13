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

    if(n > 0){
        printf("%o\n", left(z, n));
    }else if(n < 0){
        printf("%o\n", right(z, n));
    }else {
        printf("error: n is 0");
    }
    return 0;
}