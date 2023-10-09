#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: sorted array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i, sep;

	if (array == NULL || left > right)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		printf("Searching in array: ");
		sep = 0;
		for (i = left; i <= right; i++)
		{
			if (sep == 1)
				printf(", ");
			sep = 1;
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
