#include "hash_tables.h"
/**
 * key_index - calculates the index of a key
 * @key: string used to generate index
 * @size: the size of the hash table array
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
