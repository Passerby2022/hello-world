#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
    
    printf("Input order: ");
    scanf("%d", &n);
    printf("Enter a given point: ");
    scanf("%lf", &x);
    
    for ( i=0; i<=n; i++ ){
        scanf(" %lf", &a[i]);
    }
    
    printf("%.1f\n", f(n, a, x));
    
    return 0;
}

double f (int n, double a[], double x)
{
    double s = 0.0 , x0 = 1.0;
    
    for (int i = 0; i < n; i++){
        if (a[i]){
            s += x0 * a[i]; 
            x0 *= x;
        }
    }
    return s;
}
