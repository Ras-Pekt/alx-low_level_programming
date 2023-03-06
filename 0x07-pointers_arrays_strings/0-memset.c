#include "main.h"

/**
 * _memset - fills buffer with constant byte
 * @s: pointer to memeory
 * @b: constant to fill buffer
 * @n: buffer size
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
