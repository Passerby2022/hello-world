#include <stdio.h>
#include <stdlib.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main (void)
{
	int numerator, denominator, reduced_numerator, reduced_denominator;
	
	printf("Enter a score: ");
	scanf("%d/%d", &numerator, &denominator);
	
	reduce (numerator, denominator, &reduced_numerator, &reduced_denominator);
	
	printf("%d/%d", reduced_numerator, reduced_denominator);
	
	return 0;
} 

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int max, remainder;
	
	if (numerator == 0){
		printf("In lowest terms: 0\n");
		exit (0);
	}
	
	*reduced_numerator = numerator;
	*reduced_denominator = denominator;
	
	while (denominator != 0){
		remainder = numerator % denominator;
		numerator = denominator;
		denominator = remainder;
	}
	
	*reduced_numerator = *reduced_numerator / numerator;
	*reduced_denominator = *reduced_denominator / numerator;
}
