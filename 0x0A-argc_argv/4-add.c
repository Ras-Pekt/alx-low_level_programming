#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful. 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0, j;
	char *ptr;

	if (argc == 1)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			ptr = argv[i];

			for (j = 0; ptr[j] != '\0'; j++)
			{
				if (isdigit(ptr[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
