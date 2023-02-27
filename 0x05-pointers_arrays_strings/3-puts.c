#include "main.h"
#include "_putchar.c"
/**
 * _puts - prints a string to stdout
 * @str: input variable
 * Return: void
 */

void _puts(char *str)
{
	int sum = 0;

	while (*(str + sum) != '\0')
	{
		_putchar(*(str + sum));
		sum++;
	}
	_putchar('\n');
}
