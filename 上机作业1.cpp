#include <stdio.h>

int COMPARE (int a, int b);

int main (void)
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("result:%d", COMPARE(a, b));

    return 0;
}

int COMPARE (int a, int b)
{
    int r1 = 0;

    while (a % b != 0){
        r1 = a % b;
        a = b;
        b = r1;
    }

    return b;
}