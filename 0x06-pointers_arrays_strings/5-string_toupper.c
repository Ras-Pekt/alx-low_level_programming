#include "main.h"

/**
 * string_toupper - converts string to upper
 * @str: input variable
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
	}
	return (str);
}
