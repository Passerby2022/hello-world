#include<stdio.h>

int main(void){
    float sum;
    int num, count, c9, c89, c78, c67, c6, i;
    sum = 0.0;
    count = 0;
    num = count = c9 = c89 = c78 = c67 = c6 = i = 0;

    printf("Enter a number(number > 0 && number < 101): ");
    scanf("%d",&num);

    while(num > 0 && num < 101){
        sum += num;
        count++;
        if(num >= 90){
            c9++;
        }else if(num >= 80 && num < 90){
            c89++;
        }else if(num >= 70 && num < 80){
            c78++;
        }else if(num >= 60  && num < 70){
            c67++;
        }else {
            c6++;
        }
    printf("Enter a number (number > 0 && number < 101): ");
    scanf("%d",&num);  
}
    printf("%f\n", sum / count);
    printf("%d\n", c9);
    printf("%d\n", c89);
    printf("%d\n", c78);
    printf("%d\n", c67);
    printf("%d\n", c6);
    
    return 0;
    }