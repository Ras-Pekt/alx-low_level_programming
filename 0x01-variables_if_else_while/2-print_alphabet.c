#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
