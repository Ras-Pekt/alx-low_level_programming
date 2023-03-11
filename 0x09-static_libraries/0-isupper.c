#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @c: input variable
 * Return: 1 if upper. 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
