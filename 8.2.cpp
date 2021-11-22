#include <stdio.h>
//#include <stdlib.h> //调用system函数时需要用到

#define N 10//定义N的大小

int main (void)
{
    int digit_count[10] = {0}, num, digit;

    printf("Enter %d number: ", N);//显示N的值
    scanf("%d", &num);

    while (num > 0){
        digit = num % 10;
        digit_count[digit]++;
        num /= 10;
    }
    printf("Digit:\t\t");//执行完while循环后显示Digit

    for(int i = 0; i < 10;  i++){
        printf("%3d", i);
    }//执行完for循环后显示i的值，即为我们呈现Digit的内容

    printf("\nOccurrences:\t");//执行完for循环后显示Occurrences

    for (int i = 0; i < 10; i++){
        printf("%3d", digit_count[i]);
    }
    //进行遍历
    //执行完for循环后为我们呈现Occurrences的内容

    printf("\n");
    //system("pause"); //可以实现冻结屏幕，便于观察程序的执行结果

    return 0;
}



//这样写也可以
/*#include <stdio.h>

int main(void)
{
    int digit_count[10] = { 0 };
    int digit;
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (digit = 0; digit <= 9; digit++)
        printf("%3d", digit);

    printf("\nOccurrences:");
    for (digit = 0; digit <= 9; digit++)
        printf("%3d", digit_count[digit]);

    printf("\n");

    return 0;
}*/