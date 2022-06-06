#include <stdio.h>

int susu(int i);

int main (void)
{
    int i, j, g;

    for(i = 0; i < 1000; i++){
        if(susu(i) == 1 && i > 10){
            j = i;
            while(j){           //得出百位上的数字
                g = j % 10;
                j /= 10;
            }
            if(g == i % 10){
                printf("%d\n", i);
            }
        }
    }


    return 0;
}

int susu(int i)
{
    int k;

    if(i <= 1){
        return 0;
    }

    if(i == 2){
        return 1;
    }
    
    for(k = 2; k < i; k++){
        if(i % k == 0){
            return 0;
        }else if(i != k + 1){//到最后i=k+1，那么就是素数执行下一个判断语句，返回1；
            continue;
        }else{
            return 1;
        }
    }
}