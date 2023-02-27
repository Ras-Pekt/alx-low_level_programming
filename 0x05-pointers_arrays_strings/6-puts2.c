#include "main.h"

/**
 * puts2 - prints every other number
 * @str: input variable
 * Return: void
 */

void puts2(char *str)
{
	int sum = 0;

	while (*(str + sum) != '\0')
	{
		if (sum % 2 == 0)
		{
			_putchar(*(str + sum));
		}
		sum++;
	}
	_putchar('\n');
}
