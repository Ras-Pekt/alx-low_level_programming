#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: input string
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
