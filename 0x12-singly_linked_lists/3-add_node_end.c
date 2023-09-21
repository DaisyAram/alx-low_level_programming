#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer that points to list_t
 * @str: string to put new node
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	/** memory allocation */
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
	new_node->next = NULL;
	if (*head == NULL)
	{
	(*head) = new_node;
	return (new_node);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
