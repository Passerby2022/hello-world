#include <stdio.h>

int main (void)
{
    int /*a, n,*/ i, num;
    float /*n1, n2, n3,*/ rate, c, b, a, n;
    printf("Enter amount of loan: ");
    scanf("%f", &a);
    printf("Enter interest rate: ");
    scanf("%f", &b);
    printf("Enter monthly payment: ");
    scanf("%f", &c);
    printf("Enter numer if payment: ");
    scanf("%d", &num);

    rate = ((b / 100) / 12) + 1;
   /* n1 = rate * a + a - c;
    n2 = (n1 - c) * (1 + rate);
    n3 = (n2 - c) * (1 + rate);*/


    for(i = 1; i <= num; i++){
       /*printf("Number of payment:%d\n", i);
        if(i == 1){
            printf("Blance remaining after First payment: %f\n", n1);
        }else if (i == 2){
            printf("Blance remaining after second payment: %f\n", n2);
        }else if (i == 3){
            printf("Blance remaining after third payment: %f\n", n3); 
        }*/
        a *= rate;
        a -= c;
        printf("Blance remaining afte %d payment: %.2f\n",i ,a);
        }
    return 0;
}