#include <stdio.h>
 
int main (void) 
{
 double n, sum = 0.0;
 
 printf ("This program sums a series of integers.\n");
 printf ("Enter inetgers (0 to terminate): ");
 
 scanf ("%lf", &n);                     //这里scanf是用的%lf， printf是用的%f 
 while (n != 0.0) {
  sum += n;
  scanf ("%lf", &n);
 }
 
 printf ("The sum is：%f\n", sum);
 
 return 0;
}

