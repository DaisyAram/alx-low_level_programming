#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: head of the node
 * @n: value of new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));/** memory allocation for the new node */
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head; /** new node to point to the current head of the list */

	*head = new; /** make a new node the new head of the list */
	return (new);
}
