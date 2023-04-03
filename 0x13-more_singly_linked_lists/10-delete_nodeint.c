#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at nth index
 * @head: first node
 * @index: index of nth element
 * Return: 1 on success. -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode;
	listint_t *newNode;
	unsigned int i = 0;

	tempNode = *head;
	if (tempNode == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}
	for (; i < (index - 1); i++)
	{
		if (tempNode->next == NULL)
			return (-1);
		tempNode = tempNode->next;
	}
	newNode = tempNode->next;
	tempNode->next = newNode->next;
	free(newNode);
	return (1);
}
