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
		_putchar(*(str + sum));
		sum = sum + 2;
	}
	_putchar('\n');
}
