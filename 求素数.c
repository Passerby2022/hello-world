#include <stdio.h>

int judge (int x)
{
    int i;

    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 0;
    }

    for(i = 2; i < x; i++)
    {
        if(x % i == 0){
            return 0;
        }else if(x != i + 1){
            continue;
        }else{
            return 1;
        }
    }
}

int main (void)
{
    int i, k;
    int x;

    printf("Enter:");
    scanf("%d", &x);

    if(judge(x)){
        printf("%d is a prime", x);
    }else{
        printf("%d is not prime", x);
    }
}