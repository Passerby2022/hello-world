#include <stdio.h>

int main(void)
{
 int i = 1, d = 1;
 double min, E = 1;

 printf("Enter the minimum term:");
 scanf("%lf", &min);

 while (1.0 / d >= min) {
  //E = 1.0 / d + E;
  //d = d * (i + 1);
  E += 1.0 / d;
  d *= i + 1;
  i++;
 } 

 printf("The e is nearly %.20f when the min is %.20f.", E, min);

 return 0;
}


