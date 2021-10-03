#include <stdio.h>

int main (void)
{
	int amount, a, b, c, d;
	
	printf("Enter a dollar amount:");
	scanf("%d", &amount);

    a = amount/20;
    amount = amount - a * 20;
    b = amount/10;
    amount = amount - b * 10;
    c = amount/5;
    amount = amount - c * 5;
    d = amount/1;
    amount = amount - d * 1;
    
    
    printf("\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", a, b, c, d);

    
    return 0 ;
}
