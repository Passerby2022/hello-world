#include <stdio.h>

int main (void)
{
    char a, b;

    scanf("%c", &a);

    if(a >= 'a' && a <= 'z'){
        b = a - 32;
        printf("%c\n", b);
    }else if (a>= 'A' && a <= 'Z'){
        b= a + 32;
        printf("%c\n", b);
    }

    return 0;
}