#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: first node
 * @str: input string
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[len])
		len++;
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
