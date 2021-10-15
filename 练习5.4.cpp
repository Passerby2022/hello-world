/* Measure the level of wind */
#include <stdio.h>

int main (void)
{
    int rate;
    
    printf("Enter wind speed: ");
    scanf("%d", &rate);

    if (rate < 1)
      printf("Calm");
    else if (rate < 3)
      printf("Light air");
    else if (rate < 27)
      printf("Breeze");
    else if (rate < 47)
      printf("Gale");
    else if (rate < 63)
      printf("Storm");
    else 
      printf("Hurricane");
    
    return 0;
}