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
	int i = 0;

	if (*needle == 0)
		return (haystack);

	for (; *haystack; haystack++)
	{
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;

			}
		}

	}

	return ('\0');
}
