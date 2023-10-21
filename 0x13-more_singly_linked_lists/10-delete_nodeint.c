#include "lists.h"

/** 
 * delete_nodeint_at_index - deletes the node at index
 * @head: head
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int a = 0;
	listint_t *current = NULL;
