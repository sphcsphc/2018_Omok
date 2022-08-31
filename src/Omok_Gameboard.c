#include"Omok_define.h"
#include"Omok_function.h"
#include"Omok_include.h"
#include"Omok_extern.h"

void GameBoard()
{
	omok_gameboard[0][0] = 3;
	omok_gameboard[0][14] = 4;
	omok_gameboard[14][0] = 5;
	omok_gameboard[14][14] = 6;
	for (int i = 0; i < 13; i++)
	{
		omok_gameboard[0][i + 1] = 7;
		omok_gameboard[i + 1][0] = 8;
		omok_gameboard[i + 1][14] = 9;
		omok_gameboard[14][i + 1] = 10;
		for (int j = 0; j < 13; j++)
			omok_gameboard[i + 1][j + 1] = 11;
	}
}