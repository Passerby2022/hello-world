#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *ff,*fp;
    int temp=0;//temp主要用来某行判断是否删除，0表示不删除，1表示删除
    char a[1000];//放置fgets的某一行内容
    char b[1000];//保存用户输入的内容
    char c[5]="*\n";//这里将特定字符设置为 “*”


    printf("请输入要删除的开始行（的内容）:\n");
    scanf("%s",b);//输入要删除的内容
    strcat(b,"\n");//因为fgets函数在读取的字符后面自动添加一个换行符，为能用strcmp比较a和b,这里为b加上“\n”


    ff=fopen("index.txt","r");//读打开原文件index.txt
    fp=fopen("result.txt","w");//写打开临时文件result.txt


    if(ff==NULL || fp==NULL){
        printf("打开文件失败\n");
        exit(0);//退出
    }


    while(fgets(a,1000,ff))//逐行执行index.tzt里面的内容
        {
            if(strcmp(a,b)!=0 && temp ==0)//如果与输入的内容不相等temp不等于0，则不删除
               {
                   printf("%s",a);//将不删除的内容输出在控制台上（跟result文件内容是一致的）
                   fputs(a,fp);//将不删除的内容写入result.txt中
               }
               else//找到与输入内容匹配的行
               {
                    temp = 1;
                    if(strcmp(a,c)==0)//遇到下一个*，则从该行开始不再删除
                    temp = 0;
               }
        }
    fclose(ff);//关闭index文件
    fclose(fp);//关闭result文件
    return 0;
}