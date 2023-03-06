#include "main.h"

/**
 * print_chessboard - Function that prints 8 by 8 chess board
 * @a: Chess matrix
 */

void print_chessboard(char (*a)[8])
{
	int row, column, i, j;

	row = 8, column = 8;
	i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
