#include <stdio.h>
 
 int main (void)
 {
 	int height = 8; 
 	int length = 10;
 	int width = 12;
 	int volume = height * length * width;
 	
    printf("Dimensions: %dx%dx%d\n", length, width, height);
 	printf("Volume (cubic inches): %d\n", volume);
 	printf("Dimensional  (volume + 165)/166) (pounds): %d\n", (volume + 165)/166);
 	
 	return 0;
 	
 }
