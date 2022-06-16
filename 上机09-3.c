#include <stdio.h>
#include <ctype.h>

struct stu
{
    char name[10];
    char member[2];
    char isex[1];
    int number;
    int cla;
    char identity[15];
};

int main (void)
{
    int num, size;
    int i;
    char ch;

    printf("Input size: \n");
    scanf("%d", &size);

    struct stu a[size];

    for(i = 0; i < size;i++)
    {
        printf("Enter digit:\n");
        scanf("%s %s %s %d", &a[i].name, &a[i].member, &a[i].isex, &a[i].number);

        ch = *a[i].member;
        if(ch == 'S'){
            printf("Enter class:\n");
            scanf("%d", &a[i].cla);
        }
        if(ch == 'F'){
            printf("Enter dientity:\n");
            scanf("%s", &a[i].identity);
        }
    }

    for(i = 0; i < size; i++)
    {
        printf("Job:%s\n", a[i].name);
        printf("Name:%s\n", a[i].member);
        printf("Number:%d\n", a[i].number);
        printf("Swx:%s\n", a[i].isex);
        ch = *a[i].member;
        if(ch == 'S'){
            printf("Class:%d\n", a[i].cla);
        }
        if(ch == 'F'){
            printf("Position:%s\n", a[i].identity);
        }
    }

    return 0;
}