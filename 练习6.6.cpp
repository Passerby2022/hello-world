/* Show even squared value */

#include <stdio.h>

int main (void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 2;
    while ((i * i) <= n){
        printf("%10d%10d\n", i * i);
        i = i + 2;
    }

    return 0;
}

