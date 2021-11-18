#include <stdio.h>
#include <ctype.h>

int main(void)
{
 char ch;
 char ch_;

 printf("Enter the name:");
 scanf(" %c", &ch);

 ch_ = toupper(getchar());

    while (getchar() != ' ') {

    }

    while ((ch = getchar()) != '\n' && ch != ' ') {
    printf("%c", ch);
    }

 printf(", %c.\n", ch_);

 return 0;
}

