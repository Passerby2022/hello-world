#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[15];
    char math[5];
    char chinese[3];
    char english[3];
}info[100];

int main (void)
{
    FILE *fp;
    int n;
    int i;
    char filename[30];

    printf("enter a number\n");
    scanf("%d", &n);
    printf("please input filename\n");
    scanf("%s", filename);

    if((fp = fopen(filename, "w")) == NULL){
        printf("cannot open file\n");
        exit(0);
    }

    for(i = 0; i < n; i++)
    {
        printf("NO%d\n", i + 1);
        scanf("%s%s%s%s", &info[i].name, &info[i].math, &info[i].chinese, &info[i].english);
        if(fwrite(&info[i], sizeof(struct student), 1, fp) != 1){
            printf("file write error\n");
        }
    }

    if((fp = fopen(filename, "r")) == NULL){
        printf("cannot open file:\n");
        exit(0);
    }

    for(i = 0; i < n; i++)
    {
        fread(&info[i], sizeof(struct student), 1, fp);
        printf("%15s%5s%3s%3s\n", info[i].name, info[i].math, info[i].chinese, info[i].english);
    }

    fclose(fp);

    return 0;
}   