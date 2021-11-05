#include <stdio.h>
#include <stdlib.h>

void NEW(int num)
{
    if (num > 9){
        NEW(num / 10);
    }
    printf("%d ", num%10);
}
int main (void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    NEW(num);                    
}

/*int f(int n){
    if (n == 1){
        return 1;
    }else{
        return (f(n - 1) + 1);
    }
}


int main (void)
{
   // int n;
    int num = f(123);
   // printf("Enter a number: ");
    //scanf("%d", &n);
    printf("%d", num);                    
}*/

