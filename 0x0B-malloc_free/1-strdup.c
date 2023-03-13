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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == 0)
		return (0);
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
