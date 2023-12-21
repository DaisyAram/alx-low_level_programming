#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node;

	if (!ht || !key || !*key)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
	if (strcmp(key, current_node->key) == 0)
	return (current_node->value);
	current_node = current_node->next;
	}
	return (NULL);
}
