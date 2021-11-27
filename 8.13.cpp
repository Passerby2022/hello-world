#include <stdio.h>

int main (void)
{
    char digit_ch[20];
    char ch1 , ch2;
    int i, j;

    printf("Enter the first and last name:");
    scanf(" %c", &ch1);

    while (getchar() != ' ') {

    }

    i = 0;

    while ((ch2 = getchar()) != '\n'){
        digit_ch[i] = ch2;
        i++;
    }

    printf("You enered the name: ");
    
    for (j = 0; j < i; j++){
        printf("%c", digit_ch[j]);
    }

    printf(", %c.", ch1);

    return 0;
}