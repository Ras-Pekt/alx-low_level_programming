#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associate with a key.
 * @ht: hash table to query
 * @key: the key to look for
 * Return: value at index key. NULL otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
