#include"Omok_define.h"
#include"Omok_function.h"
#include"Omok_include.h"
#include"Omok_variable.h"

int main()
{
	while (1)
	{
		system("cls");
		key = NULL;
		players.turn = 1;
		players.black_number = 0;	players.white_number = 0;
		players.cur_x = players.abs_x;	players.cur_y = players.abs_y;
		players.winner = 0;
		GameBoard();
		Show_GameBoard(players);
		Show_Stones();

		while (players.winner == 0)
		{
			key = getch();
			KeyBoard(key);
		}
		Sleep(500);
		system("cls");
		GoToxy(3, 2);
		if (players.winner == 1)
		{
			printf("검");	Sleep(20);	printf("은");	Sleep(20);	printf("돌");	Sleep(20);	printf("이");	Sleep(20);
			printf(" ");	Sleep(20);
			printf("이");	Sleep(20);	printf("겼");	Sleep(20);	printf("습");	Sleep(20);	printf("니");	Sleep(20);	printf("다");	Sleep(20);	printf(".");	Sleep(100);
		}
		else if (players.winner == 2)
		{
			printf("흰");	Sleep(20);	printf(" ");	Sleep(20);	printf("돌");	Sleep(20);	printf("이");	Sleep(20);
			printf(" ");	Sleep(20);
			printf("이");	Sleep(20);	printf("겼");	Sleep(20);	printf("습");	Sleep(20);	printf("니");	Sleep(20);	printf("다");	Sleep(20);	printf(".");	Sleep(100);
		}
		GoToxy(3, 4);
		printf("다");	Sleep(20);	printf("시");	Sleep(20);	
		printf(" ");	Sleep(20);
		printf("하");	Sleep(20);	printf("겠");	Sleep(20);	printf("습");	Sleep(20);	printf("니");	Sleep(20);	printf("까");	Sleep(20);	printf("?");	Sleep(100);
		GoToxy(5, 6);
		printf("z : 예,	x : 아니요");
		while (key != 'z' && key != 'x')
		{
			key = getch();
		}
		if (key == 'z')
			continue;
		else if (key == 'x')
			break;
	}
	GoToxy(3, 8);
	return 0;
}