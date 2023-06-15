#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @h: double pointer to head node
 * @idx: index to delete node
 * Return: 1 on success. -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp->next != NULL)
	{
		temp2 = temp->next;
		temp2->prev = temp->prev;
	}

	if (temp->prev != NULL)
	{
		temp2 = temp->prev;
		temp2->next = temp->next;
	}

	free(temp);
	return (1);
}
