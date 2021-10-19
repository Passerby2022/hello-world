/* Daily fright information */

#include <stdio.h>

int main (void)
{
    int hour, minute;
    int time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    if (time < 480){
        printf("Closest departure time is 8:00a.m, Appiving at 10:16a.m");
    }
    else if (time < 583){
        if ((time - 480) < (583 - time)) printf("Closest departure time is 8:00a.m, Appiving at 10:16a.m");
        else printf("Closest departure time is 9,43a.m, Appiving at 11:51a.m");
    }
    else if (time < 679){
        if ((time - 583) < (679 - time)) printf("Closest departure time is 9:43a.m, Appiving at 11:51a.m");
        else printf("Closest departure time is 11:19a.m, Arriving at 1:31p.m");
    }
    else if (time < 767){
        if ((time - 679) < (767 - time)) printf("Closest departure time is 11:19a.m, Appiving at 1:31p.m");
        else printf("Closest departure time is 12:47a.m, Appiving at 3:00p.m");
    } 
    else if (time < 840){
        if ((time - 767) < (840 - time)) printf("Closest departure time is 12:47p.m, Appiving at 3:00p.m");
        else("Closest departure time is 2:00p.m, Appiving at 4:08p.m");
    } 
    else if (time < 945){
        if ((time - 840) < (945 - time)) printf("Closest departure time is 2:00p.m, Appiving at 4:08p.m");
        else printf("Closest departure time is 3:45p.m, Appiving at 5:55p.m");
    } 
    else if (time < 1140){
        if ((time - 945) < (1140 - time)) printf("Closest departure time is 3:45p.m, Appiving at 5:55p.m");
        else printf("Closest departure time is 7:00p.m, Appiving at 9:20p.m");
    } 
    else if (time < 767){
        if ((time - 679) < (767 - time)) printf("Closest departure time is 7:00p.m Appiving at 9:20p.m");
        else printf("Closest departure time is 9:45p.m Appiving at 11:58p.m");
    } 

    return 0;
}