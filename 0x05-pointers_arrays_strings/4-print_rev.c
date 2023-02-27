#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input variable
 * Return: void
 */

void print_rev(char *s)
{
	int new_sum = _strlen(s);

	while (new_sum >= 0)
	{
		_putchar(*(s + new_sum));
		new_sum--;
	}
	_putchar('\n');
}
