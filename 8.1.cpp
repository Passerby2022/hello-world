#include <stdio.h>
#include <stdbool.h>

#define N 10
 
int main (void)
{//false可以用0替换，true可以用1替换
 bool digit_seen[N] = {false}, digit_count[N] = {false}, flag = false;
 //digit_seen看得见的数字，digit_count是记录的数字
 //flag是有没有重复数字的标记；默认没有重复数字
 int digit;
 long long num;
 
 printf ("Enter a number: ");
 scanf ("%lld", &num);
 
 while (num > 0) {
  digit = num % 10;
  if (digit_seen[digit] == true) {
   flag = true;
   digit_count[digit] = true;
  }
  digit_seen[digit] = true;
  num /= 10;
 }

 if (flag) {
  printf ("Repeated digits(s): ");//展示重复的数字
  for (int i = 0; i < 10; i++) {
   if (digit_count[i]) printf ("%d ", i);
  } 
 }else {
  printf ("No repeated digit\n");//没有重复的数字
 }

 return 0;
 } 

