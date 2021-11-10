#include <stdio.h>

int main (void)
{
    int n, i, a;

    //printf("Enter a number:");
    //scanf("%d", &n);

    for (i = 1; i <= 9; i++){
        for (a = 1; a <= 9; a++){
           if (a < i){
           printf("        ");//八个空格，如果去掉空格就是左上三角形
           //之所以是八个空格是因为 %d*%d=%.2d占了八个空格
           }
           else{
               printf("%d*%d=%.2d\t", i, a, i * a);
           }
        }
        printf("\n");
    }

    return 0;
}