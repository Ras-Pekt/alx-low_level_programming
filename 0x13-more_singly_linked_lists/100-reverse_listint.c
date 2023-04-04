#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: first node
 * Return: pointer to 1st node of reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode; 
	listint_t *nextNode;
	
	prevNode = NULL;
	if (head == NULL)
		return (0);

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;

	return (*head);
}
