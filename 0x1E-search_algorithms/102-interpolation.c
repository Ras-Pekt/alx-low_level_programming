#include "search_algos.h"

/**
 * interpolation_search - searches for a value using
 *			the Interpolation search algorithm
 * @array: a sorted array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{

		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	if (array[low] == value)
		return (low);
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
