#include "search_algos.h"

/**
 * linear_search - searches for a value using Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
