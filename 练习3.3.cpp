#include <stdio.h>

int main (void)
{
    int a, b, c, d, e; 
    
    printf("Enter IBSN: ");
    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);

    printf("GSI prefit: %d\n", a);
    printf("Group identifier: %d\n", b);
    printf("Publisher code: %d\n", c);
    printf("Item number: %d\n", d);
    printf("Check digit: %d\n", e);

    return 0;
}