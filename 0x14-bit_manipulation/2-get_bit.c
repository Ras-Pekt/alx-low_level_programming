#include <stdio.h>
#include "main.h"
/**
 * get_bit - gets the nth bit
 * @n: input uint
 * @index: nth index
 * Return: value at nth index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int nth_bit;

	if (index > (32)
		return (-1);
	nth_bit = (n >> index) & 1;
	return (nth_bit);
}
