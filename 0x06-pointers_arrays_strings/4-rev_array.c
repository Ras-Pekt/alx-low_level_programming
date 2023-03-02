#include "main.h"

/**
 * reverse_array - reverses order of array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count = 0;
	int temp_a;

	while (count < n--)
	{
		temp_a = a[count];
		a[count] = a[n];
		a[n] = temp_a;
		count++;
	}
}
