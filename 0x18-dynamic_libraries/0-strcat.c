#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input variable
 * @src: input variable
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int src_count = 0, dest_count = 0;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}

	for (; src[src_count] != '\0'; src_count++)
	{
		*(dest + dest_count) = *(src + src_count);
		dest_count++;
	}
	*(dest + dest_count) = '\0';
	return (dest);
}
