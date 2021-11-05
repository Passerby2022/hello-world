#include <stdio.h>

int main (void)
{
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);
    i = 2;
    
    while (i < a){
        if(a % i == 0){
            printf("%dNot prime", a);
            return 0;
        }else {
            i++;
        }
    }
    printf("%d is prime", a);

    return 0;
}