#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: concatenated string. NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int cs1, cs2, count, i, j = 0;
	char *ptr;

	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
	{
	}
	for (cs2 = 0; s2[cs2] != '\0'; cs2++)
	{
	}
	count = cs1 + cs2;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < count; i++)
	{
		if (i < cs1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	return (ptr);
}
