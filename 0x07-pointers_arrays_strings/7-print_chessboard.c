#include "main.h"
/**
 * print_chessboard - Prints a representation of a chess board
 * Author: kingsley
 * @a: the board
 */
void print_chessboard(char (*a)[8])
{
	unsigned int n;
	unsigned int m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[n][m]);
		}
		_putchar('\n');
	}
}
