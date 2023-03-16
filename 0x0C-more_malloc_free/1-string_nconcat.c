#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: input string
 * @s2: input string
 * @n: length of string
 * Return: pointer to string. 0 otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cs1, cs2, count, i, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
		;
	for (cs2 = 0; s2[cs2] != '\0'; cs2++)
		;
	count = cs1 + cs2;
	if (cs2 >= n)
		ptr = malloc(sizeof(char) * count);
	else
		ptr = malloc(sizeof(char) * (cs1 + n));
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
			if (j == n)
				break;
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[cs1 + n] = '\0';
	return (ptr);
}
