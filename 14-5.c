#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    FILE *fp, *ffp;
    char con[30], con1[30];

    fp = fopen("file1.txt", "r+");
    ffp = fopen("file2.txt", "r");

    if((fp == NULL) || (ffp == NULL)){
        printf("cannot open file\n");
        exit(0);
    }

    fgets(con, sizeof(con), fp);
    fgets(con1, sizeof(con1), ffp);
    strcat(con, con1);

    puts(con);

    fputs(con1, fp);

    fclose(fp);
    fclose(ffp);

    return 0;
}