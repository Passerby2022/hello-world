#include <stdio.h>
#include "fl.h"

int main (void)
{
    int a;
    float b;

    P("enter\n");
    S(D, &a);
    P(D, a);
    P("\n");
    P("enter\n");
    S(F, &b);
    P(F, b);

    return 0;
}