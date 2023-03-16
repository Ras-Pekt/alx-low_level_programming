#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: pointer to array of integers. 0 otherwise
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (0);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (0);
	for (i = min; i <= max; i++)
	{
		ptr[j] = min;
		min++;
		j++;
	}
	return (ptr);
}
