#include <stdio.h>

int *search(int (*p)[4]);               //这个函数如果返回指针类型的变量就要声明函数名为指针类型，其函数名的指针类型要与返回的指针变量的类型相一致

int main (void)
{
    int *p;
    int a[4][4] = {{60, 85, 78, 89}, {59, 89, 88, 99}, {78, 89, 89, 50}, {60, 85, 95, 20}};
    int i, j;

    for(i = 0; i < 4; i++){
        p = search(a + i);              //a + i 相当于 a[i]
        if(p == *(a + i)){              //a[p] 相当于 a[i]
            printf("No. %d", i + 1);
            for(j = 0; j < 4; j++){
            printf("%4d\t", *(p + j));  //*(p + j) 相当于 a[p][j], *(p + j) 相当于 *(*(a + i) + j)
            }
            printf("\n");
        }
    }


    return 0;
}

int *search(int (*p)[4])
{
    int i;
    int *temp;
    for(i = 0; i < 4; i++){
        if(*(*p + i) < 60){             // *(*p + i) 相当于 a[p][i]
            temp = *p;
            break;
        }else {
            temp = NULL;
        }
    }

    return temp;
}