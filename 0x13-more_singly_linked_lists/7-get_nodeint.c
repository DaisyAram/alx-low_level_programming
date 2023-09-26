#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: head of the list
 * @index: index of the node
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *current = head;

	while (current != NULL)
	{
	{
	if (x == index)
	return (current);
	}
	x++;

	current = current->next;
	}
	return (NULL);
}
