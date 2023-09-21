#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer that points
 * @str: string to add
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	/** memory allocation to the new node */
	unsigned int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	/** if node is null then failure */
	if (!new_node)
	return (NULL);

	else
	/** copy string into a new node */
	new_node->str = strdup(str);
	/** update the length of the string */
	new_node->len = len;
	/** update the head of the list */
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
