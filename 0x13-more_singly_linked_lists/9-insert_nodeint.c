#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: the index of the list where the new node should be added
 * @n: int data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int a;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	}
	return (new);
	
	for (a = 0; a < idx - 1 && temp != NULL; a++)
	temp = temp->next;
	
	if (temp == NULL)
	return (NULL);
	
	else
	{
	new->next = temp->next;
	temp->next = new;
	return (new);
	}
}
