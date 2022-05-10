#include <stdio.h>
#include <windows.h>

int main (void)
{
    DWORD k = GetTickCount();
    int s, hour = 0, min = 0;
    s = k / 1000;

    if(s >= 60)
    {
        min = s / 60;
        s = s % 60;
    }
    if(min >= 60)
    {
        hour = min / 60;
        min = min % 60;
    }

    printf("%dh %dmin %ds\n", hour, min, s);
    system("pause");
    return 0;
}