#include <stdio.h>

int main (void)
{
    int i;
    float x, y;

    printf("Enter a number:");
    scanf(" %f%d%f", &x, &i, &y);

    printf("%f\n%d\n%f\n", x, i, y);

    return 0;
    
}
