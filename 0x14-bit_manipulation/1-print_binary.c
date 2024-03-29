#include <stdio.h>
#include "main.h"
/**
 * _shift_left - recursively divides input by 2
 * @n: input integer
 * Return: void
 */
void _shift_left(unsigned long int n)
{
	if (n < 1)
		return;
	_shift_left(n >> 1);
	if (n & 1)
		_putchar(1 + '0');
	else
		_putchar(0 + '0');
}
/**
 * print_binary - converts integer to binary
 * @n: input integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(0 + '0');
	else
		_shift_left(n);
}
