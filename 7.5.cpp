#include <ctype.h>//<ctype.h>头是一个与字符处理有关的头文件，它包含了一系列用于检测和转换单个字符的函数。
//<ctype.h> 中的函数都只有一个参数，就是要检测或者要转换的字符，并且这个参数的类型是 int，它可以表示一个有效字符，或者一个 EOF （无效字符）。
//<ctype.h> 中的函数的返回值也都是 int 类型，它可以表示一个有效字符，或者一个 EOF （无效字符），或者一个布尔值（0 值表示“假”，非 0 值表示“真”）。
#include <stdio.h>

int main (void)
{
    char ch;
    int sum = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n'){
            switch (toupper(ch)){//toupper()函数是将小写字母转换成大写字母
                case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                sum += 1;
                break;
                case 'D': case 'G':
                sum += 2;
                break;
                case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
                case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
                case 'K':
                sum += 5;
                break;
                case 'J': case 'X':
                sum += 8;
                break;
                case 'Q': case 'Z':
                sum += 10;
                break;
                //default:
                //sum ++;
                //break;
            }
    }
    printf("Scrabble value: %d\n", sum);

    return 0;

}


/*#include <ctype.h>
#include <stdio.h>

int main (void)
{
    char ch;
    int sum = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n'){
            switch (ch){
                case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u':
                sum += 1;
                break;
                case 'd': case 'g':
                sum += 2;
                break;
                case 'b': case 'c': case 'm': case 'p':
                sum += 3;
                break;
                case 'f': case 'h': case 'v': case 'w': case 'y':
                sum += 4;
                break;
                case 'k':
                sum += 5;
                break;
                case 'j': case 'x':
                sum += 8;
                break;
                case 'q': case 'z':
                sum += 10;
                break;
                //default:
                //sum ++;
                //break;
            }
    }
    printf("Scrabble value: %d\n", sum);

    return 0;

}*/