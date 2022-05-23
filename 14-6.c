#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *fp;
    //char filename[30];
    char a[100];
    char ch, *ch1;
    int zifu = 0, kongge = 0, shuzi = 0, qita = 0, zimu = 0;

    //printf("please input filename\n");
    //scanf("%s", filename);

    fp = fopen("a.txt", "r");

    if(fp == NULL){
        printf("cannot open file\n");
        exit(0);
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == 32){
            kongge++;
        }
        if(ch < 48){
            zifu++;
        }
        if(ch >= 48 && ch <= 57){
            shuzi++;
        }
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
            zimu++;
        }
        if((ch < 32) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || (ch > 122)){
            qita++;
        }
    }

    printf("%3d%3d%3d%3d%3d\n", zifu, kongge, shuzi, zimu, qita);
    return 0;
}