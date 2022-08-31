#include"Omok_define.h"
#include"Omok_function.h"
#include"Omok_include.h"
#include"Omok_extern.h"

int Line_Check()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 2; j < 13; j++)
		{
			if (omok_gameboard[i][j - 2] == 1 && omok_gameboard[i][j - 1] == 1 && omok_gameboard[i][j] == 1 && omok_gameboard[i][j + 1] == 1 && omok_gameboard[i][j + 2] == 1)
				return 1;
			else if (omok_gameboard[i][j - 2] == 2 && omok_gameboard[i][j - 1] == 2 && omok_gameboard[i][j] == 2 && omok_gameboard[i][j + 1] == 2 && omok_gameboard[i][j + 2] == 2)
				return 2;
		}
	}
	for (int i = 2; i < 13; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (omok_gameboard[i - 2][j] == 1 && omok_gameboard[i - 1][j] == 1 && omok_gameboard[i][j] == 1 && omok_gameboard[i + 1][j] == 1 && omok_gameboard[i + 2][j] == 1)
				return 1;
			else if (omok_gameboard[i - 2][j] == 2 && omok_gameboard[i - 1][j] == 2 && omok_gameboard[i][j] == 2 && omok_gameboard[i + 1][j] == 2 && omok_gameboard[i + 2][j] == 2)
				return 2;
		}
	}
	for (int i = 2; i < 13; i++)
	{
		for (int j = 2; j < 13; j++)
		{
			if (omok_gameboard[i - 2][j - 2] == 1 && omok_gameboard[i - 1][j - 1] == 1 && omok_gameboard[i][j] == 1 && omok_gameboard[i + 1][j + 1] == 1 && omok_gameboard[i + 2][j + 2] == 1)
				return 1;
			else if (omok_gameboard[i + 2][j - 2] == 1 && omok_gameboard[i + 1][j - 1] == 1 && omok_gameboard[i][j] == 1 && omok_gameboard[i - 1][j + 1] == 1 && omok_gameboard[i - 2][j + 2] == 1)
				return 1;
			else if (omok_gameboard[i - 2][j - 2] == 2 && omok_gameboard[i - 1][j - 1] == 2 && omok_gameboard[i][j] == 2 && omok_gameboard[i + 1][j + 1] == 2 && omok_gameboard[i + 2][j + 2] == 2)
				return 2;
			else if (omok_gameboard[i + 2][j - 2] == 2 && omok_gameboard[i + 1][j - 1] == 2 && omok_gameboard[i][j] == 2 && omok_gameboard[i - 1][j + 1] == 2 && omok_gameboard[i - 2][j + 2] == 2)
				return 2;
		}
	}
	return 0;
}