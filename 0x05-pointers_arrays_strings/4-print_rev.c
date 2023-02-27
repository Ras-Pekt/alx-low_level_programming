#include "main.h"
int _strlen(char *s);

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

/**
 * _strlen - calculates length of a string
 * @s: input variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int sum = 0;

	while (*(s + sum) != '\0')
	{
		sum = sum + 1;
	}
	return (sum);
}

