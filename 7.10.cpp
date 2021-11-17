#include <stdio.h>
#include <stdlib.h>

int vowel(char ch);
int main()
{
    char ch;
    int count;
    count = 0;
    while(scanf("%c",&ch),ch != '\n')
    {
         if(vowel(ch) == 1)
        count++;
    }
    printf("%d",count);
    return 0;
}
int vowel( char ch)
{
    if (ch =='a'||ch =='o'||ch =='e'||ch =='i'||ch =='u'||ch =='A'||ch =='O'||ch =='E'||ch =='I'||ch =='U'){
    return 1;
    } else{
    return 0;
    }
}
