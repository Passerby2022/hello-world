#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct people
{
    char name[30];
    char pay[3];
}info[100];

void save(char *filename, int n)
{   
    FILE *fp;
    int i;

    if((fp = fopen(filename, "w")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }

    for(i = 0; i < n; i++)
    {   
        scanf("%s %d", &info[i].name, &info[i].pay);
        fwrite(&info[i], sizeof(struct people), 1, fp);
    }

    fclose(fp);
}

void show (char *filename, int n)
{
    FILE *fp;
    int i;

    if((fp = fopen(filename, "r")) == NULL){
        printf("cannot open file\n");
        exit(0);
    }

    for(i = 0; i < n; i++)
    {
        fread(&info[i], sizeof(struct people), 1, fp);
        printf("%5s %5d", info[i].name, info[i].pay);
    }

    fclose(fp);
}

void delete ()
{
    FILE *fp;
    FILE *ffp;
    int temp = 0;
    char a[1000];
    char b[1000];
    char c[5] = "*\n";
    char filename[30];
    char filename1[30];

    printf("\nPlease enter the content to delete\n");
    scanf("%s", b);
    strcat(b, "\n");

    printf("open first file\n");
    scanf("%s", filename);
    printf("open second file\n");
    scanf("%s", filename1);

    fp = fopen(filename, "r");
    ffp = fopen(filename1, "w");
    
    if((fp == NULL) && (ffp == NULL)){
        printf("cannot open file\n");
        exit(0);
    }

    while(fgets(a, sizeof(a), fp))
    {
        if(temp == 0 && strcmp(a, b) != 0){
            printf("%s", a);
            fputs(a, ffp);
        }else{
            temp = 1;
            if(strcmp(a, c) == 0){
                temp = 0;
            }
        }
    }

    fclose(fp);
    fclose(ffp);
}

int main (void)
{
    FILE *fp;
    char filename[30];
    int n;

    printf("enter a number\n");
    scanf("%d", &n);
    printf("please input filename\n");
    scanf("%s", filename);

    save(filename, n);
    show(filename, n);
    delete();

    return 0;
}