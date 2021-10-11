 #include <stdio.h>

 int main (void)
 {
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);
    
    if (i < 0)
      printf("n is less than 0\n");
    else if (i == 0)
      printf("n is equal to 0\n");
    else if (i > 0)
      printf("n is greater than 0\n");

    return 0;
 }