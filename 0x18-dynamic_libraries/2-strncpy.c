#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies string from src to dest
 * @dest: input variable
 * @src: input variable
 * @n: input variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
