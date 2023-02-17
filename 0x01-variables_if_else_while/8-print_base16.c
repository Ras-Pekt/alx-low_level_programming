#include <stdio.h>

/**
 * main - Entry point
 * Description: print all base16 numbers
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar('a' + (x - 10));
		}
	}
	putchar('\n');
	return (0);
}
