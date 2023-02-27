#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies one string to another
 * @dest: input variable
 * @src: input variable
 * Return: returns char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}
	dest[j] = '\0';
	return (dest);
}
