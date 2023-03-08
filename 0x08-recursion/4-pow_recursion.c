#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates x to power y
 * @x: input variable
 * @y: power input
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
