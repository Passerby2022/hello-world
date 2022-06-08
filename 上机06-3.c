#include <stdio.h>

int fac (int n)
{
    if(n == 1 || n == 0){
        return 1;
    }else {
        return n * fac(n - 1);
    }
}

int main (void)
{
    int n;
    printf("enter\n");
    scanf("%d", &n);
    printf("%d", fac(n));
    return 0;
}