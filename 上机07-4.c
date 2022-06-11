#include <stdio.h>

int main (void)
{
    int num;
    int n;

    char *p[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "Novermber", "December"
    };

    printf("Enter:");
    scanf("%d", &num);
    n = num - 1;

    printf("%s", p[n]);

    return 0;
}