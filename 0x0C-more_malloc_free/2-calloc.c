#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of elements in array
 * Return: pointer to allocated memeory. 0 otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == 0 || nmemb == 0 || size == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
