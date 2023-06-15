#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - return the number of elements in a dlistint_t list
 * @h: pointer  to head node
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t numNodes = 0;

	while (h)
		h = h->next, numNodes++;

	return (numNodes);
}
