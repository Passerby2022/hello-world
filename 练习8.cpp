#include <stdio.h>

int main (void)
{
	float  x, a;
	
	
	printf("Enter a x: ");
	scanf("%f", &x);
	
	a = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	
	printf("a: %f\n", a);
	
	return 0;
}
