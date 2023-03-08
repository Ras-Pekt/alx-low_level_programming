#include "main.h"

/**
 * helper - iterates through possible roots of n
 * @sqr: input equal to variable n
 * @root: possible root of n
 * Return: root on success, -1 otherwise
 */

int helper(int sqr, int root)
{
	if (root * root == sqr)
		return (root);
	else if (root * root > sqr)
		return (-1);
	return (helper(sqr, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: input variable
 * Return: root on success, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
