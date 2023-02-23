#include "main.h"

/**
 * more_numbers - prints 1 t0 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;

			if (j > 9)
			{
				_putchar('1');
				k = (j % 10);
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
