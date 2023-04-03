#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints number of elements in struct
 * @h: variable of type list_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n != 0)
			count++;
		h = h->next;
	}
	return (count);
}
