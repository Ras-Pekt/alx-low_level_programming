#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: input string
 * Return: returns pointer to duplicated string. NULL otherwise
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr = malloc(sizeof(char) * i);
	if (ptr == 0 || str == 0)
		return (0);
	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
