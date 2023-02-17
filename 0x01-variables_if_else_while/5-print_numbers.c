#include <stdio.h>

/**
 * main - Entry point
 * Description: print all numbers of base 10
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
