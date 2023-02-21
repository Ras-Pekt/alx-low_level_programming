#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Prints 1 if the input is an alphabet
 * else it prints 0
 * @i: The input character
 * Return: 1 for alphabets. Returns 0 otherwise
 */

int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
