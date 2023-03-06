#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence of any bytes in accept string
 * @s: input string
 * @accept: accept string bytes
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
