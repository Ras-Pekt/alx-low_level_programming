#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index og nth node
 * Return: pointer to nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0, i = 0;

	if (head == NULL)
		return (NULL);

	while (temp)
		temp = temp->next, count++;

	if (index > count)
		return (NULL);

	for (; i < index; i++)
		head = head->next;

	return (head);
}
