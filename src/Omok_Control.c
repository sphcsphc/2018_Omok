#include"Omok_define.h"
#include"Omok_function.h"
#include"Omok_include.h"
#include"Omok_extern.h"

void KeyBoard(int k)
{
	switch (k)
	{
	case UP:
		if (players.cur_y > 0)
		{ 
			players.cur_y--;
			Show_GameBoard(players);
		}
		break;

	case DOWN:
		if (players.cur_y < 14)
		{
			players.cur_y++;
			Show_GameBoard(players);
		}
		break;

	case LEFT:
		if (players.cur_x > 0)
		{
			players.cur_x--;
			Show_GameBoard(players);
		}
		break;

	case RIGHT:
		if (players.cur_x < 14)
		{
			players.cur_x++;
			Show_GameBoard(players);
		}
	}
	if (k == SPACEBAR)
	{
		Set_Stone(&players);
	}
}

void Set_Stone(Omok*o)
{
	if (omok_gameboard[o->cur_y][o->cur_x] > 2)
	{
		omok_gameboard[o->cur_y][o->cur_x] = o->turn;
		if (o->turn == 1)
		{
			o->black_number++;
			o->turn = 2;
		}
		else if (o->turn == 2)
		{
			o->white_number++;
			o->turn = 1;
		}
		Show_Stones();
		o->winner = Line_Check();
		if (o->winner == 0)
		{
			o->cur_x = o->abs_x;
			o->cur_y = o->abs_y;
			Show_GameBoard(*o);
		}
	}
}