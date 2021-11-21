#include <stdio.h>

int main(void)
{
 char ch;
 int sum = 0;
 int num = 1;
 double average = 0.0;

 printf("Enter a sentence:");

 while ((ch = getchar()) != '\n') {
  if (ch != ' ') {
   sum++;
  }
  else {
   num++;
  }
 }

 average = (double)sum / num;

 printf("Average word length: %.1f\n", average);

 return 0;
}




/*#include <stdio.h>
 
int main (void)
{
 char ch;
 int sum = 0, num = 1;
 
 printf ("Enter a sentence: ");
 
 while ((ch = getchar()) != '\n') {        //输入字符直到遇到回车为止         
  sum++;             
  if (ch == ' ') {        
   num++;        //若遇到空格，则单词个数+1，该单词字母数-1 
   sum--;        
  } 
 }
 
 printf ("Average word length: %.1f", (float)sum/num);
 
 return 0;
}*/