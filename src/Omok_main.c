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
			printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);
			printf(" ");	Sleep(20);
			printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf(".");	Sleep(100);
		}
		else if (players.winner == 2)
		{
			printf("��");	Sleep(20);	printf(" ");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);
			printf(" ");	Sleep(20);
			printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf(".");	Sleep(100);
		}
		GoToxy(3, 4);
		printf("��");	Sleep(20);	printf("��");	Sleep(20);	
		printf(" ");	Sleep(20);
		printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("��");	Sleep(20);	printf("?");	Sleep(100);
		GoToxy(5, 6);
		printf("z : ��,	x : �ƴϿ�");
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