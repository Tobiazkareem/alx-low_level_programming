#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: integer
 *
 */

void print_chessboard(char (*a)[8])
{
	/* declare variable int row and column */
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
