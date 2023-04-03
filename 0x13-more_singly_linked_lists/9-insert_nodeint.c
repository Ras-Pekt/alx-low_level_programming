#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at nth index
 * @head: first node
 * @idx: index of nth position
 * @n: input integer
 * Return: nwe node at nth position. 0 otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *tempNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->n = n;
	tempNode = *head;
	for (; i < (idx - 1); i++)
	{
		if (tempNode->next == NULL)
			return (NULL);
		tempNode = tempNode->next;
	}
	newNode->next = tempNode->next;
	tempNode->next = newNode;
	return (newNode);
}
