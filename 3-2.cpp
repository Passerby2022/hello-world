#include <stdio.h>

int main (void)
{
    int number;

    scanf("%d", &number);

    switch(number){
        case 0: printf("0"); break;
        case 1: printf("1"); break;
        case 2: printf("10"); break;
        case 3: printf("11"); break;
        case 4: printf("100"); break;
        case 5: printf("101"); break;
        case 6: printf("110"); break;
        case 7: printf("111"); break;
        case 8: printf("1000"); break;
        case 9: printf("1001"); break;
        default: printf("false");
    }    

    return 0;
}