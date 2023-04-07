#include <stdio.h>
#include "main.h"
/**
 * set_bit - set bit to 1 at index
 * @n: pointer to number
 * @index: index to set bit
 * Return: 1 on success. -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = (1 << index);

	if (index > 32 || n == NULL)
		return (-1);

	*n |= mask;
	return (1);
}
