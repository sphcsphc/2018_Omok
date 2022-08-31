#include"Omok_define.h"
#include"Omok_function.h"
#include"Omok_include.h"
#include"Omok_extern.h"

void Show_GameBoard(Omok o)
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			GoToxy((j + 1) * 2, i + 1);
			if (omok_gameboard[i][j] == 1)
				printf("○");
			else if (omok_gameboard[i][j] == 2)
				printf("●");
			else if (omok_gameboard[i][j] == 3)
				printf("┏");
			else if (omok_gameboard[i][j] == 4)
				printf("┓");
			else if (omok_gameboard[i][j] == 5)
				printf("┗");
			else if (omok_gameboard[i][j] == 6)
				printf("┛");
			else if (omok_gameboard[i][j] == 7)
				printf("┳");
			else if (omok_gameboard[i][j] == 8)
				printf("┣");
			else if (omok_gameboard[i][j] == 9)
				printf("┫");
			else if (omok_gameboard[i][j] == 10)
				printf("┻");
			else if (omok_gameboard[i][j] == 11)
				printf("╋");
		}
		printf("\n");
	}
	GoToxy((o.cur_x + 1) * 2, o.cur_y + 1);
	if (o.turn == 1 && omok_gameboard[o.cur_y][o.cur_x] > 2)
		printf("○");
	else if (o.turn == 2 && omok_gameboard[o.cur_y][o.cur_x] > 2)
		printf("●");
}

void Show_Stones()
{
	GoToxy(34, 10);
	printf("검은돌 개수 : %2d", players.black_number);
	GoToxy(34, 12);
	printf(" 흰 돌 개수 : %2d", players.white_number);
}