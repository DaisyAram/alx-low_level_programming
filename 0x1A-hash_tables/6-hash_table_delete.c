#include "hash_tables.h"
/**
 * hash_table_delete -  deletes a hash table.
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
	return;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
	hash_node_t *current = ht->array[i];

	while (current)
	{
	hash_node_t *next = current->next;

	free(current->key);
	free(current->value);
	free(current);
	current = next;
	}
	}
	free(ht->array);
	free(ht);
}
