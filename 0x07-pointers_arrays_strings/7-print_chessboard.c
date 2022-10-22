#include "main.h"

/**
 * print_chessboard - display chess board
 * @a:- 2D array address
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int size = sizeof(a);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
