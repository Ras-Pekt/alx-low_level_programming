#include "main.h"

/**
 * print_last_digit - Prints the last digit
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int val;

	val = n % 10;

	if (val >= 0)
	{
		_putchar('0' + val);
	}
	else
	{
		val = val * -1;
	}
	return (val);
}
