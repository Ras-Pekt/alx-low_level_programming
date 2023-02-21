#include "main.h"

/**
* print_sign - Determines if the input number
* greater, equal or less than zero.
*
* @n: The input number as an integer.
*
* Return: 1 if greater than zero. 0 if zero.
* -1 if less than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
