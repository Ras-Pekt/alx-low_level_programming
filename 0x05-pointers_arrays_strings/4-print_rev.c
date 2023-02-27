#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input variable
 * Return: void
 */

void print_rev(char *s)
{
	int sum;

	for (sum = 0; s[sum] != '\0'; sum++)
	{
	}
	for (sum = sum - 1; sum >= 0; sum--)
	{
		_putchar(s[sum]);
	}
	_putchar('\n');
}

