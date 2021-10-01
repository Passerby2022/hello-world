#include <stdio.h>

int main (void)
{
	float amount, tax;
	
	printf("Enter an amount:");
	scanf("%f", &amount);
	
	tax = amount * 0.05 + amount;
	
	printf("Will tax aded: %f\n", tax);
	
	return 0;
}
