#include <stdio.h>

int average (int a[], int n);

int main (void)
{
	int number, j;
	int a[number];
	
	printf("Entert a number: ");
	scanf("%d", &number);
	
	printf("Enter %d number to be sorted: ", number);
	for (j = 0; j < number; j++){
		scanf("%d", &a[j]);
	}
	
	printf("Average: %d", average(a, number));
	
	return 0;
}

int average (int a[], int n)
{
	int i, average = 0;
	
	for (i = 0; i < n; i++){
		average = (a[i] + a[i - 1]) / n;		
	}
	
	return average;
}
