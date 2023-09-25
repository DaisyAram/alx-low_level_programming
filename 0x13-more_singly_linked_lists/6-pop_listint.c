#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @n: head's node data
 * @head: head of the list
 * 
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if(!*head || !head)
	return (0);
	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (value);
}
