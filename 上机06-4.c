#include <stdio.h>

int agrc(int n)
{
    if(n == 1){
        return 10;
    }else{
        return 2 + agrc(n - 1);
    }
}

int main (void)
{
    int n;
    printf("enter\n");
    scanf("%d", &n);
    printf("%d", agrc(n));
    return 0;
}