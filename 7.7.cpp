#include <stdio.h>

int main (void)
{
    int num1, num2, sum1, sum2, denom1, denom2;
    char ch;

    printf("Enter first scores: ");
    scanf("%d/%d", &num1, &num2);
    ch = getchar();
    scanf("%d/%d",&denom1, &denom2);
    
    
    /*switch (ch){
        case '+':
        sum1 = num1 * denom2 + num2 * denom1;
        sum2 = denom1 * denom2;
        break;
        case '-':
        sum1 = num1 * denom2 - num2 * denom1;
        sum2 = denom1 * denom2;
        break;
        case '*':
        sum1 = num1 * num2;
        sum2 = denom1 * denom2;
        break;
        case '/':
        sum1 = num1 * denom2;
        sum2 = num2 * denom1;
        break;
    }
    printf("The sum is: %d/%d", sum1, sum2);*/
    //这个是对的




    //这个是我第一次看到这个题目的想法，显然是错误的
    /*while (ch = getchar() != '\n'){
        if(ch == '+'){
            printf("The sum is: %d/%d", num1 * denom2 + num2 * denom1, denom1 * denom2);
        }else if(ch == '-'){
            printf("The sum is: %d/%d", num1 * denom2 - num2 * denom1, denom1 * denom2);
        }else if(ch == '*'){
            printf("The sum is: %d/%d", num1 * num2, denom1 * denom2);
        }else if(ch == '/'){
            printf("The sum is: %d/%d", num1 * denom2, num2 * denom1);
        }
    }*/

    if(ch == '+'){
            printf("The sum is: %d/%d", num1 * denom2 + num2 * denom1, denom1 * denom2);
        }else if(ch == '-'){
            printf("The sum is: %d/%d", num1 * denom2 - num2 * denom1, denom1 * denom2);
        }else if(ch == '*'){
            printf("The sum is: %d/%d", num1 * num2, denom1 * denom2);
        }else if(ch == '/'){
            printf("The sum is: %d/%d", num1 * denom2, num2 * denom1);
        }//这个是对的

    return 0;
}