#include <stdio.h>

#define add(x, y) (x * y)

int main (void)
{
    int x, y;

    printf("ENTER\n");
    scanf("%d %d", &x, &y);

    printf("%d", add(x, y));

    return 0;
}
