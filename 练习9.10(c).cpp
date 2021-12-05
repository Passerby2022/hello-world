#include <stdio.h>

int positive (int a[], int n);

int main (void)
{
	int number, j;
	int a[number];
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("Enter %d number of to sorted: ", number);
	for (j = 0; j < number; j++){
		scanf("%d", &a[j]);
	}
	
	printf("A postive number: %d", positive(a, number));
	
	return 0;
}

int positive (int a[], int n)
{
	int i, digits;
	
	for (i = 0; i < n; i++){
		if (a[i] > 0){
			digits++;
		}else {
			digits = 0;
		}
	}
	
	return digits;
}
