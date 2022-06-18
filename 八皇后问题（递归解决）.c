#include <stdio.h>

int count = 0;        //定义一个全局变量来统计总数

//判断传入的位置的行，列和斜线上是否有其他皇后的存在，有则危险，无则不危险
int notDanger (int row, int j, int (*chess)[8])
{
    int i, k, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;

    //判断列方向
    for(i = 0; i < 8; i++)
    {
        if(*(*(chess + i) + j) != 0){
            flag1 = 1;
            break;
        }
    }

    //判断左上方有没有危险，有危险flag2就为1，没有危险就为0
    for(i = row, k = j; i >= 0 && k >= 0; i--, k--)     //行减1和列减1
    {
        if(*(*(chess + i) + k) != 0){
            flag2 = 1;
            break;
        }
    }

    //判断右下方有没有危险，有危险flag3就为1，没有危险就为0
    for(i = row, k = j; i < 8 && k < 8; i++, k++)     //行加1和列加1
    {
        if(*(*(chess + i) + k) != 0){
            flag3 = 1;
            break;
        }
    }

    //判断右上方有没有危险，有危险flag4就为1，没有危险就为0
    for(i = row, k = j; i >= 0 && k < 8; i--, k++)     //行减1和列加1
    {
        if(*(*(chess + i) + k) != 0){
            flag4 = 1;
            break;
        }
    }

    //判断左下方有没有危险，有危险flag5就为1，没有危险就为0
    for(i = row, k = j; i < 8 && k >= 0; i++, k--)     //行加1和列减1
    {
        if(*(*(chess + i) + k) != 0){
            flag5 = 1;
            break;
        }
    }

    if(flag1 || flag2 || flag3 || flag4 || flag5){       //其中一个flag为1就返回0，即有危险就返回0
        return 0;
    }else{      //没有危险就返回1
        return 1;   
    }
}

//参数row表示起始行
//参数n表示列数
//参数(*chess)[8]表示指向棋盘每一行的指针
void EightQueen(int row, int n, int (*chess)[8])      //棋盘的行和列，和主棋盘
{
    //行的话用指针，列的话用数组
    int chess2[8][8], i, j;        //临时的棋盘

    for(i = 0; i < 8; i++)     //将主棋盘复制给临时的棋盘
    {   
        for(j = 0; j < 8; j++)
        {
            chess2[i][j] = chess[i][j];
        }
    }

    if(row == 8){       //当起始行来到第八行的时候操作结束，并且打印出来
        printf("第 %d 种\n", count + 1);
        for(i = 0; i < 8; i++)
        {
            for(j = 0; j < 8; j++)
            {
                printf("%d ", *(*(chess2 + i) + j));
            }
            printf("\n");
        }
        printf("\n");
        count++;
    }else{
        //判断这个位置是否有危险
        //如果没有危险的话就继续往下
        for(j = 0; j < 8; j++)
        {
            if(notDanger(row, j, chess)){        //判断是否危险，自定义一个函数，危险的话返回0不危险的话返回一个真的值
                for(i = 0; i < 8; i++)
                {
                    *(*(chess2 + row) + i) = 0;      //先让整行赋值为0
                }
                *(*(chess2 + row) + j) = 1;     //再让不危险的这个位置放入皇后既是赋值为1

                EightQueen(row + 1, n, chess2);
            }
        }
    }
}

int main (void)
{
    int chess[8][8], i, j;      //先用二维数组定义一个空的棋盘

    for(i = 0; i < 8; i++)       //初始化棋盘为0，当放入皇后则是1
    {
        for(j = 0; j < 8; j++)
        {
            chess[i][j] = 0;
        }
    }

    EightQueen(0, 8, chess);

    printf("总共有 %d 种解决方法！\n\n", count);

    return 0;
}