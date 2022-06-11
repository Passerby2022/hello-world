#include <stdio.h>

int compare (char *str1, char *str2)
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0'){
            return 0;
        }
        str1++;
        str2++;
    }
    if(*str1 > *str2){
        return 1;
    }
    if(*str1 < *str2){
        return -1;
    }
}

int main (void)
{
    char str1[5], str2[5];

    gets(str1);
    gets(str2);

    printf("%d", compare(str1, str2));
    
    return 0;
}