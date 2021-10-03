#include <stdio.h>

int main (void)
{
	float x, a;
	
	printf("Enter an x: ");
	scanf("%f", &x);
	
	a = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 ;

	printf("Output results: %f\n", a);
	
	return 0;
}
