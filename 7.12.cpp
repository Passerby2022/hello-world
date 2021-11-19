#include <stdio.h>

int main(void)
{
 char ch;
 double a, b;

 printf("Enter an expression: ");
 scanf("%lf", &a);

 while ((ch = getchar()) != '\n') {
  scanf("%lf", &b);

  switch (ch) { 
  case '+': a = a + b; break;
  case '-': a = a - b; break;
  case '*': a = a * b; break;
  case '/': a = a / b; break;
  default: printf("ERROR\n"); break;
  }
 }

 printf("The value is %f\n", a);

 return 0;
}




/*#include <stdio.h>
 
int main (void)
{
 double num1, num2;
 char sym;
 
 printf ("Enter an expression: ");
 scanf ("%lf", &num1);
 
 while (1) { 
  sym = getchar();
  if (sym == '\n') break;
  scanf ("%lf", &num2);
  switch (sym) {
   case '+':
    num1 = num1 + num2;
    break;
   case '-':
    num1 = num1 - num2;
    break;
   case '*':
    num1 = num1 * num2;
    break;
   case '/':
    num1 = num1 / num2;
    break;
  }
   
 }
 
 printf ("Value of expression: %.1f", num1);
 
 return 0;
}*/



