#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of  a slistint_t list
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)/*head is null*/
	{
	return (count);
	}

	while (h->prev != NULL)/*head pointer to prev*/
	h = h->prev;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}
