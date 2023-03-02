#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: input variable
 * @s2: input variable
 * Return: 0 if equal, -15 if s1 is shorter, 15 if s2 is shorter
 */

int _strcmp(char *s1, char *s2)
{
	int s1_counter, s2_counter;

	for (s1_counter = 0; s1[s1_counter] != '\0'; s1_counter++)
	{
	}
	for (s2_counter = 0; s2[s2_counter] != '\0'; s2_counter++)
	{
	}
	if (s1_counter != s2_counter)
	{
		return (s1_counter - s2_counter);
	}
	return (0);
}
