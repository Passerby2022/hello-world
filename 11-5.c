#include <stdio.h>

enum day{Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main (void)
{
    int day;

    printf("ENTER\n");
    scanf("%d", &day);

    switch(day)
    {
        case Monday:
            printf("the day is Monday:\n");
            break;
        case Tuesday:
            printf("the day is Tuesday:\n");
            break;
        case Wednesday:
            printf("the day is Webnesday:\n");
            break;
        case Thursday:
            printf("the day is Thursday:\n");
            break;
        case Friday:
            printf("the day is Friday:\n");
            break;
        case Saturday:
            printf("the day is Saturday:\n");
            break;
        case Sunday:
            printf("the day is Sunday:\n");
            break;
        default:
            printf("???\n");
            break;
    }

    return 0;
}