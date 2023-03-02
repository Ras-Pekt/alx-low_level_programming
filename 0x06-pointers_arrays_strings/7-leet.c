#include "main.h"

/**
 * leet - convert string to 1337
 * @str: input variable
 * Return: leet string
 */

char *leet(char *str)
{
	int counter, leet_counter;
	char leet1[] = "AEOTL";
	char leet2[] = "43071";

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		for (leet_counter = 0; leet_counter < 5; leet_counter++)
		{
			if (str[counter] == leet1[leet_counter] || str[counter]
			    - 32 == leet1[leet_counter])
			{
				str[counter] = leet2[leet_counter];
			}
		}
	}
	return (str);
}
