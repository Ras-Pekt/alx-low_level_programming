#include <stdio.h>

/**
 * main - Entry point
 * @n, @div, @maxFact: input variables
 * Return: void
 */

int main(void)
{
	long int n = 612852475143;
	long int div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
		}
		if (n == 1)
		{
			printf("%lu\n", maxFact);
			break;
		}
	}
	return (0);
}
