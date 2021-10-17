/* Find the maximum and minimum */

#include <stdio.h>

int main (void)
{
    int n1, n2, n3, n4, min1, max1, min2, max2;

    printf("`Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    
    if (n1 < n2){
        min1 = n1;
        max1 = n2;
    }
    else{
        min1 = n2;
        max1 = n1;
    }
    if (n3 < n4){
        min2 = n3;
        max2 = n4;
    }
    else{
        min2 = n4;
        max2 = n3;
    }
    if (min1 > min2)min1 = min2;
    if (max1 > max2)max1 = max2;

    printf("Largest: %d\n", max1);
    printf("Smallest: %d\n", min1);

    return 0;
}