#include "3-calc.h"


/**
 * get_op_func - selects the correct function
 * @s: operator
 * Return: pointer to function. 0 otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	return (0);
}
