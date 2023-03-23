#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - print strings
 * @separator: seperator between the strings
 * @n: numbers of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list uv;

	va_start(uv, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(uv, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(uv);
}
