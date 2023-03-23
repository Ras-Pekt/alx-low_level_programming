#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - print character
 * @uv: input variable
 * Return: void
 */
void print_c(va_list uv)
{
	printf("%c", va_arg(uv, int));
}
/**
 * print_i - print integer
 * @uv: input variable
 * Return: void
 */
void print_i(va_list uv)
{
	printf("%d", va_arg(uv, int));
}
/**
 * print_f - print float
 * @uv: input variable
 * Return: void
 */
void print_f(va_list uv)
{
	printf("%f", va_arg(uv, double));
}
/**
 * print_s - print string
 * @uv: input variable
 * Return: void
 */
void print_s(va_list uv)
{
	char *str;

	str = va_arg(uv, char *);
	str == NULL ? printf("(nil)") : printf("%s", str);
}
/**
 * print_all - print anything
 * @format: argument types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char t_arg[] = "cifs";
	va_list uv;
	int i = 0, j, flag = 0;
	void (*print_ptr_arr[])(va_list) = {print_c, print_i, print_f, print_s};

	va_start(uv, format);
	while (format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && flag)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			print_ptr_arr[0](uv);
			flag = 1;
			break;
		case 'i':
			print_ptr_arr[1](uv);
			flag = 1;
			break;
		case 'f':
			print_ptr_arr[2](uv);
			flag = 1;
			break;
		case 's':
			print_ptr_arr[3](uv);
			flag = 1;
			break;
		} i++;
	}
	printf("\n");
	va_end(uv);
}
