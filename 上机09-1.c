#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int main (void)
{
    struct date time;
    int sum = 0;
    int i;

    printf("year: month: day:\n");
    scanf("%d%d%d", &time.year, &time.month, &time.day);

    sum = time.day;

    if((time.year % 100 != 0 && time.year % 4 == 0) || (time.year % 400 == 0)){
        for(i = 1; i < time.month; i++)
        {
            switch(i)
            {
                case 4: case 6: case 9: case 11:
                    sum += 30;
                    break;
                case 2:
                    sum += 28;
                    break;
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    sum += 31;
                    break;
            }
        }
    }else{
        for(i = 1; i < time.month; i++)
        {
            switch(i)
            {
                case 4: case 6: case 9: case 11:
                    sum += 30;
                    break;
                case 2:
                    sum += 28;
                    break;
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    sum += 31;
                    break;
            }
        }
    }

    printf("该日在本年中是第%d天", sum);

    return 0;
}