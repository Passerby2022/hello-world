#include <stdio.h>

double median (double x, double y, double z);

int main (void)
{
	double n1, n2, n3;
	
	printf("Enter three number: ");
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	
	printf("Middle number is: %lf", median(n1, n2, n3));
	
	return 0;
}

double median (double x, double y, double z)
{
	double i;
	
	if (x <= y){      
		if (y <= z){
			i = y;
		}else if (x <= z){
			i = z;
		}else {
			i = x;
		}
	}else {
		if (z <= y){
			i = y;
		}else if (z <= y){
			i = x;
		}else {
			i = z;
		}
	}
	
	return i;
}
