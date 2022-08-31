#include"Omok_define.h"
#include"Omok_function.h"
#include"Omok_include.h"
#include"Omok_extern.h"

void GoToxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}