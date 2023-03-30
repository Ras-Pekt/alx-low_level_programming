#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints number of elements in struct
 * @h: variable of type list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (count);
		count++;
		h = h->next;
	}
	return (count);

}
