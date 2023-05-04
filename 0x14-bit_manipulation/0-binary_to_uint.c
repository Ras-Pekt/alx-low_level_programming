#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input binary
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
