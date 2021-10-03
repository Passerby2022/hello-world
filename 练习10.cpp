#include <stdio.h>

int main (void)
{
	int amount, a, b, c, d;
	
	printf("Enter a dollar:");
	scanf("%d", &amount);
	
	a = amount/20;
	b = (amount - a * 20)/10;
	c = (amount - a * 20 - b * 10)/5;
	d = (amount - a * 20 - b * 10 - c * 5)/1;
	
	printf("$20 bills£»%d\n", a);
	printf("$10 bolls: %d\n", b);
	printf("$5 bolls: %d\n", c);
	printf("$1 bolls: %d\n", d);
	
	return 0;	
}
