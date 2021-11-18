#include <stdio.h>
#include <ctype.h>

int main(void)
{
 int n = 0;
 char ch;

 printf("Enter a sentence: ");

 while (ch != '\n') {
  ch = tolower(getchar());
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
   n++;
  }
 }

 printf("Your sentence contains %d vowels.", n);

 return 0;
}

