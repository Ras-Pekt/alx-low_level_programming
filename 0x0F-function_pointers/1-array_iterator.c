#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on elements of array
 * @array: input array
 * @size: size of array
 * @action: funtion pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
