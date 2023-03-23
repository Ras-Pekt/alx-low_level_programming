#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: seperator between the numbers
 * @n: numbers of integers passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list uv;

	va_start(uv, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(uv, unsigned int), separator);
	printf("%d\n", va_arg(uv, unsigned int));
	va_end(uv);
}
