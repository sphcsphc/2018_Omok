#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACEBAR 32

typedef struct omok
{
	int turn;
	int black_number;
	int white_number;
	int abs_x, abs_y;
	int cur_x, cur_y;
	int winner;
}Omok;