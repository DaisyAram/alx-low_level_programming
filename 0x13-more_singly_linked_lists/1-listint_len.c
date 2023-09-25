#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: head
 *
 * Return:  number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t value = 0; /** initial length of size_t */

	while (h)
	{
	if (h != NULL) /** while the head is not null traverse through the list */
	value++;
	h = h->next;
	}
	return (value);
}
