#include <stdio.h>
#define N 5

int main()
{
 int a,b;
 printf("请输入%d个数：",N); 
 scanf("%d",&a);
 for(int i=1;i<=N-1;i++)
 {
  scanf("%d",&b);
  if(b>a) a=b;
 }
 printf("其中最大值为：%d",a);
 return 0;
 } 


