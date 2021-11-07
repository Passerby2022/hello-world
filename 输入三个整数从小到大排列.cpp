#include <stdio.h>

int main (void)
{
    int x, y, z, t;

    printf("Enter three number: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x < y){
        t = x;
        x = y;
        y = t;
    }else if (x < z){
        t = x;
        x = z;
        z = t;
    }else if (y < z){
        t = y;
        y = z;
        z = t;
    }

    printf("%.1f %.1f %.1f", (float)x, (float)y, (float)z);

    return 0;
}