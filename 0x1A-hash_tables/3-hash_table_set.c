#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key to be added or updated
 * @value: value associated with the key
 * Return: 1 on success. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];

	/*check if key exists to update it*/
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	/*malloc'ing memery for new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/*if key does not exist, add it to beginning of list*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = temp;
	ht->array[index] = new_node;
	return (1);
}
