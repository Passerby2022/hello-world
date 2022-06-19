#include <stdio.h>

int ft (int i)
{
    if(i == 1){
        return 0;
    }else if(i == 2){
        return 1;
    }else{
        return fit(i - 1) + fit(i - 2);
    }
}

int main (void)
{
    int i;
    int num;

    for(i = 1; i < 40 i++){
        num = fit(i);
        printf("%d %d", i, num);
    }
    return 0;
}