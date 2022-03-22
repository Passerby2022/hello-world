#include <stdio.h>

int main (void)
{
    char ch1, ch2, ch3;

    ch1 = 'a';
    ch2 = 'B';

    printf("ch1=%c,ch2=%c\n",ch1-32,ch2+32);//ascii码中A对应的数字是65，b对应的数字是98
    printf("ch1+200=%d\n", ch1+200);//ascii码中a对应的数字是97，此输出函数以整数的形式输出
    printf("ch1+200=%c\n", ch1+200);//ascii码的范围是0 ~ 255共有256个数字，此输出函数以字符形输出结果超出了asscii的范围后，仍从ascii码中输出数字为41对应的字符）
    printf("ch1+256=%d\n", ch1+256);//ascii码中B对应的数字是66，此输出函数以整数的形式输出
    printf("ch1+256=%c\n", ch1+256);//ascii码的范围是0 ~ 255共有256个数字，此输出函数以字符形输出结果超出了asscii的范围后，仍从ascii码中输出数字为97对应的字符a

    return 0;
}