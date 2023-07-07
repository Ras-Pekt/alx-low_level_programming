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

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
