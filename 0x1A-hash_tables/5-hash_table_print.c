#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; index < ht->size; index++)
	{
		temp = ht->array[index];

		if (temp == NULL)
			continue;

		while (temp)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);

			temp = temp->next;
		}

		flag = 1;
	}
	printf("}\n");
}
