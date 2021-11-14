#include <stdio.h>

int main (void)
{//C89的写法
    /*printf("Size of int: %d\n", (int) sizeof(int));
    printf("Size of short: %d\n", (int) sizeof(short));
    printf("Size of long: %d\n", (int) sizeof(long));
    printf("Size of float: %d\n", (int) sizeof(float));
    printf("Size of double: %d\n", (int) sizeof(double));
    printf("Size of long double: %d\n", (int) sizeof(long double));*/
//C99的写法
//sizeof的类型是size_t，在C99中size_t类型比unsigned long更长
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));
    
    return 0;
}