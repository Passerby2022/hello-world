#include <stdio.h>
#include <time.h>

int main (void)
{
    struct tm *local;
    time_t t;       

    t = time(NULL);         //使用time函数获取日历时间
    local = localtime(&t);          //使用localtime函数将日历时间转化为本地时间

    printf("星期 月 日 小时:分:秒 年\n");
    printf("%s", asctime(local));       //使用asctime函数将时间固定的格式显示出来
    //asctime函数是通过tm结构来生成具有固定格式的保存时间信息的字符串
    //asctime函数只是把tm结构对象中的各个域填到时间字符串的相应位置就行了
    return 0;
}