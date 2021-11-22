#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    bool digit_seen[10] = {false}, digit_count[10] = {false}, flag = false;
    int digit;
    long long num;

    while (1){

        printf("Enter a series number: ");
        scanf("%lld", &num);

        if (num > 0){
            while (num > 0){
                digit = num % 10;
                if (digit_seen[digit] = true){
                flag = true;
                digit_seen[digit] = true;
                num /= 10;
                }
            }
        }else {
            break;
        }

        if (flag){
            printf("Repeated digit(s):");
        }else {
            printf("No repeated digit(s):");
        }
        
        return 0;
    }
}