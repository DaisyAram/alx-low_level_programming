#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the node
 *
 * Return: sum or f the list is empty, return 0
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
	sum += current->n;
	current = current->next;
	}
	return (sum);
}
