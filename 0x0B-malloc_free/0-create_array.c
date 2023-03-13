#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: input character in array
 * Return: array of characters. 0 otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == 0)
		return (0);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
