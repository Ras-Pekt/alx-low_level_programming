#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of diagonals
 * @a: input array
 * @size: input size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		diag2 = diag2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", diag1, diag2);
}
