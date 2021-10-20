#include <stdio.h>

int main (void)
{
    int number, number1, number2, number3;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    number1 = number/10;
    number2 = number%10;
    
    switch (number1){
        case 9: printf("ninety");
                break;
        case 8: printf("eighty");
                break;
        case 7: printf("seventy");
                break;
        case 6: printf("sixty");
                break;
        case 5: printf("fifity");
                break;
        case 4: printf("fourty");
                break;
        case 3: printf("thirty");
                break;
        case 2: printf("twenty");
                break;
        case 1:
                switch (number2){
                    case 9:  printf("nineth");
                             break;
                    case 8:  printf("eighteen");
                             break;
                    case 7:  printf("seventh");
                             break;
                    case 6:  printf("sixteen");
                             break;
                    case 5:  printf("fifteen");
                             break;
                    case 4:  printf("fourteen");
                             break;
                    case 3:  printf("thirteen");
                             break;
                    case 2:  printf("twelve");
                             break;
                    case 1:  printf("eleven");
                             break;
                }
                
    }

    number3 = number%10;

    switch (number3){
        case 9: printf("nine");
                break;
        case 8: printf("eight");
                break;
        case 7: printf("seven");
                break;
        case 6: printf("six");
                break;
        case 5: printf("five");
                break;
        case 4: printf("four");
                break;
        case 3: printf("three");
                break;
        case 2: printf("two");
                break;
        case 1: printf("one");
                break;
    } 

   

    return 0;

}