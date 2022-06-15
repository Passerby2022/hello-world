#include <stdio.h>

struct digit
{
    int num;
    char name[10];
    int score[3];
};

void print (struct digit *data)
{
    int i= 0;
    for(i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d\n", data[i].num, data[i].name, data[i].score[0], data[i].score[1], data[i].score[2]);
    }
}

int main (void)
{
    struct digit data[5];
    int i;

    printf("number: name: score1: score2: score3: \n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d%s%d%d%d", &data[i].num, &data[i].name, &data[i].score[0], &data[i].score[1], &data[i].score[2]);
        getchar();
    }

    print(data);

    return 0;
}