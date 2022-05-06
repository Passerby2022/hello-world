#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STUDENT
{
    char name[10];
    int vote[3];
}identity[3] = {
    {"liuwei", 0},
    {"cici", 0},
    {"jack", 0}
};

int main (void)
{
    char s[10];
    int i, j;
    int max;

    for(j = 0; j < 3; j++){
        printf("ENTER\n");
        gets(s);

        for(i = 0; i < 3; i++){
            if(strcmp(s, identity[i].name) == 0){
                *(identity[i].vote) += 1;
                break;
            }
        }
    }

    max = *(identity[0].vote);

    for(i = 0; i < 3; i++)
    {
        printf("name:%s vote: %d\n", identity[i].name, *(identity[i].vote));
        if(*(identity[i + 1].vote) > max){
            max = *(identity[i].vote);
        }
    }

    printf("%s", identity[i].name);

    return 0;
}