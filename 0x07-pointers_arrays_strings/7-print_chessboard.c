#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: input variable
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
