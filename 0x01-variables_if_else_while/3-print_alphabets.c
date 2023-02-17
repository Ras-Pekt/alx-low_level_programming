#include <stdio.h>

/**
 * main - Entry point
 * Description: print lower and uppercase alphabet
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
