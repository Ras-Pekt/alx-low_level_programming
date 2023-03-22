#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success. 1 otherwise
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(argv[2]);
	if (operation == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
