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
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(uv, unsigned int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(uv);
}
