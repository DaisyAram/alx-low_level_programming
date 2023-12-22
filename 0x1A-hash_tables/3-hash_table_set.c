#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table.
 * @key: key
 * @value: valiue associated with the key
 * @ht: hash table
 *
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t **node = &ht->array[index];

	if (!ht || !key || !*key || !value)
	return (0);

	while (*node)
	{
	if (!strcmp(key, (*node)->key))
	{
	free((*node)->value);
	(*node)->value = strdup(value);
	return (1);
	}
	node = &(*node)->next;
	}

	*node = calloc(1, sizeof(hash_node_t));
	if (!*node)
	return (0);

	(*node)->key = strdup(key);
	(*node)->value = strdup(value);

	return (1);
}
