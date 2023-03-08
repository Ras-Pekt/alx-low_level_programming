#include "main.h"

/**
 * helper - iterates through divisors of n
 * @n: input variable
 * @div: possible divisors of n
 * Return: 1 if prime, 0 otherwise
 */

int helper(int n, int div)
{
	if (n <= 1)
		return (0);
	if (n == div)
		return (1);
	else if (n % div == 0)
		return (0);
	return (helper(n, div + 1));
}

/**
 * is_prime_number - checks if n is prime
 * @n: input variable
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (helper(n, 2));
}
