#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *fp, *sfp;
    char filename[30], filename1[30];
    cahr str[30];

    printf("please input filename\n");
    scanf("%s", filename);
    printf("please input filename1\n");
    scanf("%s", filename1);

    if((fp = fopen(filename, "r")) == NULL){
        printf("cannot open file\n");
        exit(0);
    }
    if((sfp = fopen(filename1, "w")) == NULL){
        printf("cannot open file\n");
        exit(0);
    }

    fgets(str, sizeof(str), fp);
    fputs(str, sfp);
    fclose(fp);
    fclose(sfp);

    return 0;
}