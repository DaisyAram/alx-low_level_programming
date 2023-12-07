#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data of a dlistint_t linked list
 * @head: head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
	while (head->prev != NULL)
	head = head->next;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	}
	return (sum);
}
