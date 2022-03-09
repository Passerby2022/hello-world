#include <stdio.h>

int main (void)
{
    int i;
    float h = 100, sum = 100.0;

    for (i = 2; i <= 10; i++){
        h = h / 2;
        sum += h * 2;
    }

    printf("Height%f,Sum%f", h / 2, sum);

    return 0;
}