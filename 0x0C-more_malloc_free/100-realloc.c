#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: buffer size
 * Return: pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of previous allocated memory
 * @new_size: nw size in bytes of new memory block
 * Return: pointer to new memory block. 0 otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min_size;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		min_size = old_size;
	else
		min_size = new_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (0);
	nptr = _memcpy(nptr, ptr, min_size);
	free(ptr);
	return (nptr);
}
