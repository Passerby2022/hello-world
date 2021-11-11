#include <stdio.h>

int main (void)
{
    int n, a, i, j, r;


    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1 = sum, 7 = sat): ");
    scanf("%d", &a);
    
    i = 1;
    /*while (i < a){
        
        i++;
        r = i;
    }*/

   /* if (a = 1){
    for (j = 1; j <= (a + a - 2) ; ++j)
        printf(" ");//自定义前面空格的个数
        i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }


    else if(a = 2){
        for (j = 1; j <= (a + a - 1) ; ++j)
        printf(" ");
        i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }


    else if(a = 3){*/
        for (j = 1; j <= (a + a) ; ++j)
        printf(" ");
        //i = 1;
    /*while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }


    else if(a = 4){
        for (j = 1; j <= (a + a + 1) ; ++j)
        printf(" ");
        i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }


    else if(a = 5){
        for (j = 1; j <= (a + a + 2) ; ++j)
        printf(" ");
        i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }


    else if(a = 6){
        for (j = 1; j <= (a + a + 3) ; ++j)
        printf(" ");
        i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }


    else if(a = 7){
        for (j = 1; j <= (a + a + 4) ; ++j)
        printf(" ");
        i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }
    }   */
    
    i = 1;
    while(i <= n){
        printf("%2d ",i);
        i++;
        if((i + a - 2) % 7 == 0){
            printf("\n");
           }
        }


    return 0;
    

}