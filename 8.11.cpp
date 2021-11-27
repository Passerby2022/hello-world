#include <stdio.h>

#define N 100

int main (void)
{
    char digit_ch[N];
    int i = 0, j, ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n'){
        if (ch <= 'Z' && ch >= 'A'){
            switch (ch){
                case 65: case 66: case 67:
                digit_ch[i] = '2';
                break;
                case 68: case 69: case 70:
                digit_ch[i] = '3';
                break;
                case 71: case 72: case 73:
                digit_ch[i] = '4';
                break;
                case 74: case 75: case 76:
                digit_ch[i] = '5';
                break;
                case 77: case 78: case 79:
                digit_ch[i] = '6';
                break;
                case 80: case 81: case 82: case 83:
                digit_ch[i] = '7';
                break;
                case 84: case 85: case 86:
                digit_ch[i] = '8';
                break;
                case 87: case 88: case 89: case 90:
                digit_ch[i] = '9';
                break;
            }
            i++;
            continue;
            }
            digit_ch[i] = ch;
            i++;
        }

    printf("In numberic form: ");

    for (j = 0; j < i; j++){
        printf("%c", digit_ch[j]);
    }

    return 0;
}