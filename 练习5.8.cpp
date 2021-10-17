/* Daily fright information */

#include <stdio.h>

int main (void)
{
    int hour, minute;

    printf("Enter a 24-hour time :");
    scanf("%2d:%2d", &hour, &minute);

    

    if (hour < 9)
      printf("Closest departure time is: 8:00a.m Arrivaing at: 10:16a.m");
    else if (hour < 10)
      printf("Closest departure time is: 9:43a.m Arrivaing at: 11:52a.m");
    else if (hour < 12)
      printf("Closest departure time is: 11:19a.m Arrivaing at: 1:31p.m");
    else if (hour < 14)
      printf("Closest departure time is: 12:47p.m Arrivaing at: 3:00p.m");
    else if (hour < 15)
      printf("Closestdeparture time is: 2:00p.m Arrivaing at: 4:08p.m");
    else if (hour < 16)
      printf("Closest departure time is: 3:45p.m Arrivaing at: 5:55p.m");
    else if (hour < 20)
      printf("Closest departure time is: 7:00p.m Arriving at: 9:20p.m");
    else if (hour < 22)
      printf("Closest departure time is: 9:45p.m Arrivaing at: 11:58p.m");

      return 0;
}