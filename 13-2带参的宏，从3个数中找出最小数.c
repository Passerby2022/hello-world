#include <stdio.h>

#define max(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main (void)
{
    int a, b, c;

    printf("enter\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", max(a, b, c));

    return 0;
}