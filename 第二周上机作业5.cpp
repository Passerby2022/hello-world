#include <stdio.h>

int main (void)
{
    int a=9;

    a+=a*=a/=a-6;
    
    printf("a=%d",a);

    return 0;
}
  