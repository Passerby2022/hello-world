#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpr;
    char name[100] = {0};//存储路径名
    int ch;
    int number = 0;
    int character = 0;
    int space = 0;
    int total = 0;

    scanf("%s",name);

    if((fpr = fopen(name,"r")) == NULL)
    {
        printf("Can't open %s\n",name);
        exit(1);
    }
    while((ch = fgetc(fpr)) != EOF)
    {
       if(ch>=48 &&ch<=57)//数字的ASCII码
       {
            number++;
       }
       if((ch>=65&&ch<=90) || (ch>=97&&ch<=122))//字母的ASCII码
       {
           character++;
       }
       if(ch == 32)//空格的ASCII码
       {
           space++;
       }
       total++;
    }
    printf("数字 = %d 字母 = %d 空格 = %d 字符数 = %d\n",number,character,space,total);
    return 0;
}
