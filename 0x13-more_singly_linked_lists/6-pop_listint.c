#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: first node
 * Return: head node's data. 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int headData;

	if (head == NULL)
		return (0);
	headData = (*head)->n;
	temp = *head;
	temp = (*head)->next;
	free(*head);
	return (headData);
}
