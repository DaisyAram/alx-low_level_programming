#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: pointer of the first element in the list
 * @n: data to be inserted in the new element
 *
 * Return:address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = 0;
	listint_t *temp = *head; /** temporary head */

	new = malloc(sizeof(listint_t)); /** memory allocation of the new node */

	if (!new)
	return (NULL);

	new->n = n; /** assign value to the node */

	new->next = NULL;/** no node after new */

	if (*head == NULL)
	{
	(*head) = new;
	return (new);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}
