#include<stdio.h>
 
int main()
{
 //有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
    int i,j,k;

    //printf("\n");
    //以下为三重循环

    for(i = 1; i < 5; i++) { // 以下为三重循环,百位
        for(j = 1; j < 5; j++) {//十位
            for (k = 1; k < 5; k++) {   // 个位
                if (i != k && i!= j && j != k) {//确保i、j、k三位互不相同 
                    printf("%d%d%d ",i ,j ,k);
   
                }
            }
        }
    }
  //printf("\n");
}


