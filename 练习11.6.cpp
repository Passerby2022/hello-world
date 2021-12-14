#include <stdio.h>

void find_two_largest (int a[], int n, int *largest, int *second_largest);

int main (void)
{
	int n, a[n], big, small;
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d", &a[n]);
	}
	
	find_two_largest(a, n, &big, &small);
	
	printf("%d\n", big);
	printf("%d\n", small);
	
	return 0;
 } 
 
void find_two_largest (int a[], int n, int *largest, int *second_largest)
{
	int j;
	
		if (a[0] > a[1]){
			*largest = a[0];
			*second_largest = a[1];
		}else {
			*largest = a[1];
			*second_largest = a[0];
		}
		
		for (j = 2; j < n; j++){
			if (a[j] > *largest){
				*second_largest = *largest;
				*largest = a[j];
			}else if (a[j] > *second_largest){
				*second_largest = a[j];
			} 
		}
	
}
