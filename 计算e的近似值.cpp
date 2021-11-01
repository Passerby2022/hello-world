#include <stdio.h>

int main(void)
{
 int n, i = 1, d = 1;
 double E = 1;

 printf("Enter the order:");
 scanf("%d", &n);

/* do {
  E = 1.0 / d + E;E += 1.0 / d;
  d = d * (i + 1);
  i++;
 } while (i <= n);*/

 /*while(i <= n){
    E += 1.0 / d;
    d *= (i + 1);
    i++;
  }*/

  for(i = 1; i <= n; i++){
        E += 1.0 / d;
        d *= (i + 1);
  }

 printf("The e is nearly %f at the %d order.", E, n);

 return 0;
}


