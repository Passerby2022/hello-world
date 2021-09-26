#include <stdio.h>

int main (void)
{ 
    float volume, radius;


	printf("Enter radius of ball: ");
	scanf("%f", &radius);
	volume = 4.0f/3.0f * radius * radius * radius * 3.141592;
	
	
	printf("volume: %f\n", volume); 
	return 0;
 } 
