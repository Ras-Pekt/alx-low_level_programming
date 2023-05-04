#include <stdio.h>
#include "main.h"
/**
 * flip_bits - determines no. of bit to flip
 * @n: input integer
 * @m: input integer
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_bits;
	unsigned int count;

	flip_bits = n ^ m;
	count = 0;

	while (flip_bits)
	{
		flip_bits = flip_bits & (flip_bits - 1);
		count++;
	}
	return (count);
}
