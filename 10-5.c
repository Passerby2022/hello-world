#include <stdio.h>

#define N 10

void insert(int *a, int n, int m);

int main (void)
{
    int i, m;
    int a[N + 1];
    int *p;

    printf("Input\n");
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter a number\n");
    scanf("%d", &m);

    insert(a, N, m);

    for(p = a; p < a + N + 1; p++){
        printf("%d\n", *p);
    }

    return 0;
}

void insert(int *a, int n, int m)
{
    int *p;
    int *q;

    for(p = a; p < a + N; p++){      //遍历数组元素
        if(*p > m){                 //找到要插入的位置
            q = p;                  //记录要插入的位置
            break;                  //跳出循环
        }
    }

    for(p = a + N; p >= q; p--){
        *p = *(p - 1);                  //将插入位置之后的数据下移,其中(p - 1)的意思是指针p的前一个地址,*(p - 1)的意思是指针p的前一个地址的值
                                        //整个表达式的意思就是把指针p上一个地址存储的数值复制给p当前所指向的地址，再去显示p当前指向的地址存储的数值
    } 

    *q = m;                         // *q = m, 表示插入
}