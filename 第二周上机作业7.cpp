#include <stdio.h>

int main (void)
{
    int year;
	
	printf("��������ݣ�\n"); 
    scanf ("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0)&& (year % 100 != 0)){
        printf("%d ������\n", year);
    }else {
        printf("%d ��������\n", year);
    }

    return 0;
}
