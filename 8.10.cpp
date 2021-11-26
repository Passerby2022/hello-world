#include <stdio.h>
#include <math.h>

int main (void)
{
    const int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};//初始化数组
    const int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};//初始化数组

    int hours, minutes, time;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    time = hours * 60 + minutes;

    int min = 1440, m;

//找到距离最近的时间，并记录其下标
    for (int i = 0; i < 8; i++){
        if (fabs(departure[i] - time) < min){
            min = fabs(departure[i] - time);
            m = i;
        }
    }

    int hour, minute;
 //判断是上午还是下午并输出 
    if (departure[m] / 60 > 12) {//下午
        if (arrival[m] / 60 > 12) {
            printf("CLosest departure time is %d:%.2d p.m.", departure[m] / 60 - 12, departure[m] % 60);
            printf(", arriving at %d:%.2d p.m.", arrival[m] / 60 - 12, arrival[m] % 60);
        }else if (arrival[m] / 60 <= 12){
            printf("CLosest departure time is %d:%.2d p.m.", departure[m] / 60 - 12, departure[m] % 60);
            printf(", arriving at %d:%.2d p.m.", arrival[m] / 60 - 12, arrival[m] % 60);
        }
        } else if (departure[m] / 60 <= 12){//上午
        if (arrival[m] / 60 > 12) {
                printf("CLosest departure time is %d:%.2d a.m.", departure[m] / 60, departure[m] % 60);
                printf(", arriving at %d:%.2d p.m.", arrival[m] / 60, arrival[m] % 60);
       } else if (arrival[m] / 60 <= 12){
                printf("CLosest departure time is %d:%.2d a.m.", departure[m] / 60, departure[m] % 60);
                printf(", arriving at %d:%.2d p.m.", arrival[m] / 60, arrival[m] % 60);
        }
    }
 
 return 0;
}