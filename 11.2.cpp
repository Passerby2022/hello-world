#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main (void)
{
	int desired, departure, arrival;
	int time1, time2;
	char ch;
	
	printf("Input time: ");
	scanf("%2d:%2d%c.m", &time1, &time2, &ch);
	
	desired = time1 * 60 + time2;
	
	find_closest_flight(desired, &departure, &arrival);
	
	return 0;	
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time < 480){
        printf("Closest departure time is 8:00a.m, Appiving at 10:16a.m");
    }
    else if (desired_time < 583){
        if ((desired_time - 480) < (583 - desired_time)) printf("Closest departure time is 8:00a.m, Appiving at 10:16a.m");
        else printf("Closest departure time is 9,43a.m, Appiving at 11:51a.m");
    }
    else if (desired_time < 679){
        if ((desired_time - 583) < (679 - desired_time)) printf("Closest departure time is 9:43a.m, Appiving at 11:51a.m");
        else printf("Closest departure time is 11:19a.m, Arriving at 1:31p.m");
    }
    else if (desired_time < 767){
        if ((desired_time - 679) < (767 - desired_time)) printf("Closest departure time is 11:19a.m, Appiving at 1:31p.m");
        else printf("Closest departure time is 12:47a.m, Appiving at 3:00p.m");
    } 
    else if (desired_time < 840){
        if ((desired_time - 767) < (840 - desired_time)) printf("Closest departure time is 12:47p.m, Appiving at 3:00p.m");
        else("Closest departure time is 2:00p.m, Appiving at 4:08p.m");
    } 
    else if (desired_time < 945){
        if ((desired_time - 840) < (945 - desired_time)) printf("Closest departure time is 2:00p.m, Appiving at 4:08p.m");
        else printf("Closest departure time is 3:45p.m, Appiving at 5:55p.m");
    } 
    else if (desired_time < 1140){
        if ((desired_time - 945) < (1140 - desired_time)) printf("Closest departure time is 3:45p.m, Appiving at 5:55p.m");
        else printf("Closest departure time is 7:00p.m, Appiving at 9:20p.m");
    } 
    else if (desired_time < 1305){
        if ((desired_time - 1140) < (1280 - desired_time)) printf("Closest departure time is 7:00p.m Appiving at 9:20p.m");
        else printf("Closest departure time is 9:45p.m Appiving at 11:58p.m");
    } 

}


