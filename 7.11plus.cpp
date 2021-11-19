#include <stdio.h>

int main(void)
{
    char x, y, ch;
    int sum = 0;

    printf("Enter a first and last name:");//输入名字
    scanf(" %c", &x);//存储名字到x

    while(1){
        y = getchar();
        if(y >= 65 && y < 97){//当y输入这个范围时执行下面的语句
            printf("%c",y);//显示字符y
            while((ch = getchar()) != '\n'){//执行前面那个循环里面的嵌套的循环，当字符不等于\n时，执行这个循环
                if(ch == ' ')//执行if语句
                break;
                printf("%c", ch);
                sum++;
            }
}
    if(sum >= 1)
    break;
} 
    printf(",%1c.", x);

    return 0;
}
