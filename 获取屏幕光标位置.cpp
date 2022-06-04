#include <windows.h>
#include <conio.h>

HANDLE hOut //控制台句柄

/*获取屏幕光标位置*/
void gotoxy (int x, int y)
{
    COORD pos;//定义结构体类型变量pos
    posX = x;//横坐标
    psxY = y;//纵坐标
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}