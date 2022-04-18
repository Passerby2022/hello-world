#include <stdio.h>

int main (void)
{
    char x;
    
    scanf("%c", &x);

    if(x >= 65 && x <= 122){
        printf("alpha\n");
    }else if(x >= 48 && x <= 57){
        printf("numberic\n");
    }else {
        printf("other\n");
    }

    return 0;
}