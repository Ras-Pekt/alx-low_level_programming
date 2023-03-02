#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitlizes all words of a string
 * @str: input varibale
 * Return: str
 */

char *cap_string(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		if ((counter == 0 ||
		str[counter - 1] == 32 ||
		str[counter - 1] == 9 ||
		str[counter - 1] == 10 ||
		str[counter - 1] == 44 ||
		str[counter - 1] == 59 ||
		str[counter - 1] == 46 ||
		str[counter - 1] == 33 ||
		str[counter - 1] == 63 ||
		str[counter - 1] == 34 ||
		str[counter - 1] == 40 ||
		str[counter - 1] == 41 ||
		str[counter - 1] == 123 ||
		str[counter - 1] == 125) && (str[counter] >= 'a' && str[counter] <= 'z'))
		{
			str[counter] = str[counter] - 32;
		}
	}
	return (str);
}
