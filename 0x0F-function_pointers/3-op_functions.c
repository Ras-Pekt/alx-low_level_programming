#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 2 integers
 * @a: input integer
 * @b: input integer
 * Return: sum of integers. 0 otherwise
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 integers
 * @a: input integer
 * @b: input integer
 * Return: difference of integers. 0 otherwise
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: input integer
 * @b: input integer
 * Return: product of integers. 0 otherwise
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: input integer
 * @b: input integer
 * Return: division of integers. 0 otherwise
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds modulus of 2 integers
 * @a: input integer
 * @b: input integer
 * Return:  modulus of integers. 0 otherwise
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
