#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: input variable
 * @n: input variable
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("%d", *(a + (n - 1)));
	putchar('\n');
}
