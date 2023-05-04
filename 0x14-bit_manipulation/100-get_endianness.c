#include <stdio.h>

/**
 * get_endianness - checks endianess
 *
 * Return: 0 if big endian (msb is first in memory)
 *	1 if little endian (lsb is first in memory)
 */
int get_endianness(void)
{
	int i = 10;
	char *ptr;

	ptr = (char *)&i;

	if (*ptr == 0)
		return (0);
	return (1);
}
