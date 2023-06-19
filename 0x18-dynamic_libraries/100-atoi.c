#include "main.h"
/**
 * _atoi - converts string into integers
 * @str: input string
 * Return: converted string to integer
 */
int _atoi(char *str)
{
	int sign = 1, convNum = 0;

	for (; *str; str++)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			convNum = (*str - '0') + (convNum * 10);
		else if (convNum > 0)
			break;
	}
	return (convNum * sign);
}