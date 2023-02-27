#include "main.h"

/**
 * puts_half - prints last half of sequence
 * @str: input variable
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int new_len;
	int st;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		new_len = (len - 1) / 2; /* length of last half if len is odd */
		st = new_len + 1;
	}
	else
	{
		new_len = len / 2; /* length of last half if len is even */
		st = new_len;
	}

	for (i = st; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
