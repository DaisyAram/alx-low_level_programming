#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: value of the list
 *
 * Return: addres of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;


	new = malloc(sizeof(dlistint_t));/*allocate memory to the new node*/
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
	while (h->next != NULL)
	h = h->next;
	h->next = new;
	}
	else
	{
	*head = new;
	}
	new->prev = h;
	return (new);
}
