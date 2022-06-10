#include <stdio.h>
#include <string.h>

void Seek (char *p)
{
    int i = 0;
    int str = 0, num = 0, STR = 0, space = 0, other = 0;
    for(i = 0; i < strlen(p); i++)
    {
        if(p[i] >= 'a' && p[i] <= 'z'){
            str++;
        }else if(p[i] >= 'A' && p[i] <= 'Z'){
            STR++;
        }else if(p[i] == ' '){
            space++;
        }else if(p[i] >= '0' && p[i] <= '9'){
            num++;
        }else{
            other++;
        }
    }
    printf("str: %d STR: %d  num: %d space: %d other: %d", str, STR, num, space, other);
}

int main (void)
{
    char *p;
    char ch[10];
    p = ch;

    gets(ch);
    printf("%s", p);
    printf(" ");

    Seek(p);
    return 0;
}