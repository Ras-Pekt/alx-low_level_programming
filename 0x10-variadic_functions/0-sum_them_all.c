#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: first parameter
 * Return: sum. 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list uv;

	va_start(uv, n);
	for (i = 0; i < n; i++)
		sum += va_arg(uv, unsigned int);
	va_end(uv);
	return (sum);
}
