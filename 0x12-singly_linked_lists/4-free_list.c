#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: head of the node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp; /** declare  a pointer to a variable */

	while (head != NULL) /** until the list is empty */
	{
	temp = head; /** assign node to temp */
	temp = head->next;/** traverse through the list */
	free(head->str) ;/** free the list */
	free(head); /** free memory allocated for  temp */
	head = temp;
	}
}
