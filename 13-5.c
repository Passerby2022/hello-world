#include <stdio.h>

#define add(n, sum) sum += n

int main (void)
{
    int i;
    int a[101];
    int sum = 0;

    for(i = 1; i <= 100; i++)
    {
        if(i % 2 == 0){
            add(i, sum);
        }
    }
    printf("%d", sum);

    return 0;
}