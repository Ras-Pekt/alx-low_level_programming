#include "main.h"

/**
 * rot13 - encode using rot13
 * @str: input variable
 * Return: encoded string
 */

char *rot13(char *str)
{
	int counter, rot_counter;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot26[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		for (rot_counter = 0; rot_counter < 52; rot_counter++)
		{
			if (str[counter] == rot13[rot_counter])
			{
				str[counter] = rot26[rot_counter];
				break;
			}
		}
	}
	return (str);
}
