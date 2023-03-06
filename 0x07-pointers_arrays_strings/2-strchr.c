#include "main.h"

/**
 * _strchr - finds the 1st occurence of char
 * @s: input string
 * @c: char to find
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}
	return (0);
}
