#include <stdio.h>

int number(int *por, int b[4]);

int main (void)
{
    int a[4];
    int i, n;
    int *p;

    for(p = a; p < a + 4; p++){
        scanf("%d", p);
    }
    number(p, a);

    return 0;
}

int number(int *por, int b[4])
{
    int i;

    for(por = b + 3; por >= b; por--){
        printf("%d\n", *por);
    }
}