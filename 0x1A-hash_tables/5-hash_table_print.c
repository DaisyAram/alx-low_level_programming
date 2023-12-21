#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: nothing/
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *bucket;

	if (!ht)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	bucket = ht->array[i];
	while (bucket)
	{
	if (bucket != ht->array[i])
	printf(", ");
	printf("'%s': '%s'", bucket->key, bucket->value);
	bucket = bucket->next;
	}
	}
	printf("}\n");
}
