#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head
 *
 * Return:  number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/** initialization of variable to store current node */
	size_t value = 0;

	/** print data of  current node */
	while (h)
	{
	printf("%d\n", h->n);
	value++;
	h = h->next;
	}
	return (value);
}
