#include <stdio.h>

void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);

int main (void)
{
	int dollars, twenties, tens, fives, ones;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);
	
	pay_amount (dollars, &twenties, &tens, &fives, &ones);
	
	printf("%d\n", twenties);
	printf("%d\n", tens);
	printf("%d\n", fives);
	printf("%d\n", ones);
	
	return 0;
}

void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	int i, j, k, l;
	
	*twenties = dollars / 20;
	dollars = dollars - 20 * *twenties;
	*tens = dollars / 10;
	dollars = dollars - 10 * *tens;
	*fives = dollars / 5;
	dollars = dollars - 5 * *fives;
	*ones = dollars / 1;
}
