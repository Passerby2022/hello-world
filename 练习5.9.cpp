/* Compare which time is earlier */

#include <stdio.h>

int main (void)
{
    int mm, dd, yy, max1, max2, mm1, dd1, yy1;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);

    if (yy < yy1){
        printf("%d/%d/%.2d is earile than %d/%d/%.2d", mm, dd, yy, mm1, dd1, yy1);
    }
    else if (yy1 < yy){
        printf("%d/%d/%.2d is earile than %d/%d/%.2d", mm1, dd1, yy1, mm, dd, yy);
    }
    else if (dd < dd1){
        printf("%d/%d/%.2d is earile than %d/%d/%.2d", mm, dd, yy, mm1, dd1, yy1);
    }
    else if (dd1 < dd){
        printf("%d/%d/%.2d is earile than %d/%d/%.2d", mm1, dd1, yy1, mm, dd, yy);
    }
    else if (mm < mm1){
        printf("%d/%d/%.2d is earile than %d/%d/%.2d", mm, dd, yy, mm1, dd1, yy1);
    }
    else if (mm1 < mm){
        printf("%d/%d/%.2d is earile than %d/%d/%.2d", mm1, dd1, yy1, mm, dd, yy);
    }
    

    return 0;
}