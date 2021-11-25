#include <stdio.h>
#include <ctype.h>//调用toupper函数 <=> Call toupper function

#define N 100

int main (void)
{
    int j, i = 0;
    char digit_ch[N];

    printf("Enter message: ");

    while (((digit_ch[i]) = getchar()) != '\n'){//122 is z, 97 is a
        i++;//读入输入的数字和字母 <=> Read in the entered numbers and letters
    }
    printf("BlFF-speak: ");
    
    for (j = 0; j < i; j++){
        if ((digit_ch[j] <= 122) && (digit_ch[j] >= 97)){//122代表z, 97代表a
            digit_ch[j] = toupper(digit_ch[j]);//toupper函数可以将大写转化为小写 <=> The toupper function can convert uppercase to lowercase
        }
        switch(digit_ch[j]){
                case 'A': printf ("4"); break;
                case 'B': printf ("8"); break;
                case 'E': printf ("3"); break;
                case 'I': printf ("1"); break;
                case 'O': printf ("0"); break;
                case 'S': printf ("5"); break;
                default : printf ("%c", digit_ch[j]); break;
            }
        }
        for (int num = 0; num < 10; num++){
            printf("!");
        }

    return 0;
}
