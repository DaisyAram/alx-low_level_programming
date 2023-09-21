#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)/** while at head */
	{
	a++; /** increment the size */
	h = h->next; /** when the pointer moves to the next node */
	}
	return (a);
}
