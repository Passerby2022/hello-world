#include <stdio.h>

void get_next (char *T, int *next)        //传入T代表模拟串，next代表next数组
{
    int j = 0;
    int i = 1;
    next[1] = 0;    

    while(i < T[0])     //当i的值小于子串数组的长度的时候
    {
        if(j == 0 || T[i] == T[j])       //i代表后缀，j代表前缀
        {
            i++;
            j++;
            //if(T[i] != T[i - 1]){       //当前T数组元素不等于前一个元素的时候
                next[i] = j;
            //}else{
                //next[i] = next[j];      //当前T数组元素等于前一个元素的时候，next数组当前元素的值就和前一个元素的值相等
            //}
        }
        else
        {
            //回溯
            j = next[j];  
        }
    }
//因为前缀是固定的，后缀是相对的
}

int main (void)
{
    char str[255];
    int next[255];
    int i;

    str[0] = 9;

    for(i = 1; i <= 9; i++)
    {
        scanf("%c", &str[i]);
    }

    get_next(str, next);

    for(i = 1; i <= 9; i++)
    {
        printf("%d ", next[i]);
    }

    return 0;
}