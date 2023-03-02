#include "main.h"

/**
 * _strncat - concatenates 2 strings with limitations
 * @dest: input variable
 * @src: input variable
 * @n: input variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_count = 0, dest_count = 0;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	for (; src_count < n && src[src_count] != '\0'; src_count++)
	{
		*(dest + dest_count) = *(src + src_count);
		dest_count++;
	}
	return (dest);
}
