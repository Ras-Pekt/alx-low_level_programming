#include <stdio.h>
#include "main.h"

/**
 * add - adds 2 integers
 * @a: input integer
 * @b: input integer
 * Return: sum of integers. 0 otherwise
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts 2 integers
 * @a: input integer
 * @b: input integer
 * Return: difference of integers. 0 otherwise
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies 2 integers
 * @a: input integer
 * @b: input integer
 * Return: product of integers. 0 otherwise
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides 2 integers
 * @a: input integer
 * @b: input integer
 * Return: division of integers. 0 otherwise
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (a / b);
}

/**
 * mod - finds modulus of 2 integers
 * @a: input integer
 * @b: input integer
 * Return:  modulus of integers. 0 otherwise
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (a % b);
}

