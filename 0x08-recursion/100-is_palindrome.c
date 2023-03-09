#include "main.h"

/**
 * _strlen - check length of string
 * @s: input string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 * compare - compares each character of the string.
 * @s: input string
 * @start: 1st character index
 * @end: last character index
 * Return: 1 if similar, 0 otherwise
 */

int compare(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (compare(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: input string
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen(s) - 1));
}
