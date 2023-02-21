#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			if (i <= 23 && j <= 59)
			{
				_putchar('\n');
			}
		}
	}
}
