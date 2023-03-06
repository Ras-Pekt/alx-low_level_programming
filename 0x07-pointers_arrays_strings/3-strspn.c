#include "main.h"

/**
 * _strspn - calculates length of a prefix substring
 * @s: input string
 * @accept: substring to accept
 * Return: total bytes of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, i;
	unsigned int sum = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				sum += 1;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
	}
	return (sum);
}
