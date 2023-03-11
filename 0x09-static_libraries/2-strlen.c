#include "main.h"

/**
 * _strlen - calculates length of a string
 * @s: input variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int sum = 0;

	while (*(s + sum) != '\0')
	{
		sum = sum + 1;
	}
	return (sum);
}
