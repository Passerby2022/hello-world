#include <stdio.h>

int compare(int a, int b, int c)
{
    int max = 0;
    if(a > b){
        if(a > c){
            max = a;
        }else {
            max = c;
        }
    }else if(b > c){
        max = b;
    }else {
        max = c;
    }

    return max;
}

int main (void)
{
    int a, b, c;
    int max = 0;

    printf("enter\n");
    scanf("%d %d %d", &a, &b, &c);

    max = compare(a, b, c);
    printf("%d", max);

    return 0;
}