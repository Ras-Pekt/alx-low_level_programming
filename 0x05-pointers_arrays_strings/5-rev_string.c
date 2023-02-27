#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input variable
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
