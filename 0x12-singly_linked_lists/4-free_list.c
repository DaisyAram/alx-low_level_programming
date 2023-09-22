#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	free (temp);
	}
}
