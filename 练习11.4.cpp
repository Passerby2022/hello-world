#include <stdio.h>

void swap (int *p, int *q);

int main (void)
{
	int i, j;
	
	printf("Enter two number: ");
	scanf("%d%d", &i, &j);
	
	swap(&i, &j);

	printf("%d\n", i);
	printf("%d\n", j);
		
	return 0;
}

void swap (int *p, int *q)
{
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}
