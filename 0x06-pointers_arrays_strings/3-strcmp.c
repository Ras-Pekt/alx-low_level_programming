#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: input variable
 * @s2: input variable
 * Return: 0 if equal, -15 if s1 is shorter, 15 if s2 is shorter
 */

int _strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
		counter++;
	}
	return (0);
}
