#include "search_algos.h"

void print(int *array, size_t left, size_t right);
int recursive_binary(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches for all values using the Binary search algorithm
 * @array: sorted array of integers
 * @size: size of the array
 * @value: value(s) to search for
 * Return: value(s). -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL || left > right)
		return (-1);

	return (recursive_binary(array, left, right, value));
}

/**
 * recursive_binary - recursively searches for all values
 * @array: sorted array of integers
 * @left: beggining of array
 * @right: end of array
 * @value: value to search for
 * Return: value. -1 otherwise
*/
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (left > right)
		return (-1);

	middle = (left + right) / 2;

	print(array, left, right);

	if (array[middle] < value)
		return (recursive_binary(array, middle + 1, right, value));
	else if (array[middle] > value)
		return (recursive_binary(array, left, middle - 1, value));

	if (middle == 0 || array[middle - 1] != value)
		return (middle);
	return (recursive_binary(array, left, middle - 1, value));
}

/**
 * print - prints array being searched
 * @array: sorted array of integers
 * @left: beggining of array
 * @right: end of array
 * Return: void
 */
void print(int *array, size_t left, size_t right)
{
	size_t sep = 0, i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (sep == 1)
			printf(", ");
		sep = 1;
		printf("%d", array[i]);
	}
	printf("\n");
}
