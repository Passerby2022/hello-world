#include <stdio.h>

int main (void)
{
    int x, y, z, max;

    scanf("%d %d %d", &x, &y, &z);
    max = x;
    if(y > max){
        max = y;
    }else if(z > max){
        max = z;
    }else {
        max = x;
    }

    printf("%d", max);

    return 0;
}