#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: first node
 * @str: input string
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	size_t len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	list_t *lastNode = *head;

	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = newNode;
	return (*head);
}
