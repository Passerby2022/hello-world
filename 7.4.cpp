#include <stdio.h>

int main (void)
{
    int num;

    printf("Enter phone number: ");           

    while ((num = getchar()) != '\n'){
        if (num <= 'Z' && num >= 'A'){
            switch (num){
                case 65: case 66: case 67://ABCDEFGHIJKLMNOPQRSTUVWSYZ的值参考ASCLL码字符对照表
                printf("2");
                break;
                case 68: case 69: case 70:
                printf("3");
                break;
                case 71: case 72: case 73:
                printf("4");
                break;
                case 74: case 75: case 76:
                printf("5");
                break;
                case 77: case 78: case 79:
                printf("6");
                break;
                case 80: case 81: case 82: case 83:
                printf("7");
                break;
                case 84: case 85: case 86:
                printf("8");
                break;
                case 87: case 88: case 89: case 90:
                printf("9");
                break;
            }
            continue;
        }
        printf("%c", num);
    }
    return 0;
}