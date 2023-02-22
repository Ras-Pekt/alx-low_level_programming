#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: input variable
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 97)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 97)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
