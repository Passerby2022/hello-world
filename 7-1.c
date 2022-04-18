#include <stdio.h>

#define N 10

int main (void)
{
    int n, i;

    printf("---MenU---\n");
    printf("1 = Load\n");
    printf("2 = Save\n");
    printf("3 = Open\n");
    printf("other = Quit\n");

    i = 0;
    while(i < N){
        scanf("%d", &n);
        if(n == 1){
            printf("Processing Load\n");
        }else if (n == 2){
            printf("Processing Save\n");
        }else if (n == 3){
            printf("Processing Open\n");
        }else {
            printf("Processing Quit\n");
        }
        i++;
    }

    return 0;
}