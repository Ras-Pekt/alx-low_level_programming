#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: input string
 * @needle: search substring
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (haystack[i] == needle[j])
		{
			return (&haystack[i]);
			j++;
		}
	}
	return (0);
}
