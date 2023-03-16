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
	unsigned int cs1, count, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
		;
	count = cs1 + n;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
