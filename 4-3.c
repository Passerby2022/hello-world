#include <stdio.h>

int main (void)
{
    int ab, cd;

    for(ab = 10; ab < 100; ab++){
        for(cd = 10; cd < 100; cd++){
            if(((ab * 100 + cd) == ((ab + cd) * (ab + cd)))){
                printf("%d %d\n", ab, cd);
            }
        }
    }
    return 0;
}