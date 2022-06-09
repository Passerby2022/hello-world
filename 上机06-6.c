#include <stdio.h>

int fac (int n, int x)
{
    if((x - 1) % 5 == 0){
        if(n == 1){
            return 1;
        }else{
            return fac(n - 1, 4 * (x - 1) / 5);
        }   
    }

    return 0;
}

int main (void)
{
    int i = 0, flag = 0;
    int x;
    int n = 5;

    do
    {
        i++;
        x = i * 5 + 1;
        if(fac(n, x)){
            flag = 1;
            printf("捕鱼的总数：%d", x);
        }
    }while(!flag);

    return 0;
}