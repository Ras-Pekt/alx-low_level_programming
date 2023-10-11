#include "search_algos.h"

/**
 * binarysearch - searches for a value using the Binary search algorithm
 * @array: sorted array of integers
 * @left: start of the array
 * @right: end of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int binarysearch(int *array, size_t left, size_t right, int value)
{
	size_t middle, i, sep;

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

/**
 * exponential_search - searches for a value using
 *			the Exponential_search algorithm
 * @array: a sorted array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (binarysearch(array, left, right, value));
}
