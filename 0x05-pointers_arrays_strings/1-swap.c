#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: input variable
 * @b: input variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a + *b;

	*a = c - *a;
	*b = c - *b;
}
