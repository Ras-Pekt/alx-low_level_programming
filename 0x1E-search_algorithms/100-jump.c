#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: a sorted array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0, idx = 0;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		idx = i;
		i += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx, i);

	while (idx <= i && array[idx] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (array[idx]);
		idx++;
	}

	return (-1);
}
