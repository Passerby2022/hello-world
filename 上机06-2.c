#include <stdio.h>

int compare(int a, int b)
{
    int Max;
    if(a > b){
        Max = a;
    }else{
        Max = b;
    }
    return Max;
}

int main (void)
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", compare(a,b));
    return 0;
}