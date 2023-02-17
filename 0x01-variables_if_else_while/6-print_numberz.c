#include <stdio.h>

/**
 * main - Entry point
 * Description: print all base 10 numbers using putchar
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}