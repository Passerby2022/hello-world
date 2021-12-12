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
	
	int t1, t2, t3, t4;
		
	if (departure < 720){
		ch = 'a';
	}else if (departure > 720){
		ch = 'p';
	}
	
	if (departure < 780){
		t1 = departure / 60;
		t2 = departure % 60;	
	}else if (departure > 780){
		t1 = departure / 60 - 12;
		t2 = departure % 60;
	}
	
	if (arrival < 780){
		t3 = arrival / 60;
		t4 = arrival % 60;
	}else if (arrival > 780){
		t3 = arrival / 60 - 12;
		t4 = arrival % 60;
	}

	printf("Closest departure time is %2d:%02d%c.m, Appiving at %2d:%02d%c.m", t1, t2, ch, t3, t4, ch);
	 
	return 0;	
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time < 480){
        *departure_time = 480 , *arrival_time = 616;
    }
    else if (desired_time < 583){
        if ((desired_time - 480) < (583 - desired_time)) *departure_time = 480, *arrival_time = 616;
        else *departure_time = 583, *arrival_time = 712;
    }
    else if (desired_time < 679){
        if ((desired_time - 583) < (679 - desired_time)) *departure_time = 583, *arrival_time = 712;
        else *departure_time = 679, *arrival_time = 811;
    }
    else if (desired_time < 767){
        if ((desired_time - 679) < (767 - desired_time)) *departure_time = 679, *arrival_time = 811;
        else *departure_time = 767, *arrival_time = 900;
    } 
    else if (desired_time < 840){
        if ((desired_time - 767) < (840 - desired_time)) *departure_time = 767, *arrival_time = 900;
        else *departure_time = 840, *arrival_time = 968;
    } 
    else if (desired_time < 945){
        if ((desired_time - 840) < (945 - desired_time)) *departure_time = 840, *arrival_time = 968;
        else *departure_time = 945, *arrival_time = 1075;
    } 
    else if (desired_time < 1140){
        if ((desired_time - 945) < (1140 - desired_time)) *departure_time = 945, *arrival_time = 1075;
        else *departure_time = 1140, *arrival_time = 1280;
    } 
    else if (desired_time < 1305){
        if ((desired_time - 1140) < (1280 - desired_time)) *departure_time = 1140, *arrival_time = 1280;
        else *departure_time = 1305, *arrival_time = 1438;
    } 

}


