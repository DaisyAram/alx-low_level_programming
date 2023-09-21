#include "lists.h"
/**
 * print_list - Prints all elements in a linked list
 * @h: pointer to list_t
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
	if (!h->str)/** string is null */
	printf("[0] (nil)\n");

	else/** if the string is not null then string and length is */
	printf("[%u] %s\n", h->len,  h->str);

	h = h->next;
	a++;
	}
	return (a);
}

