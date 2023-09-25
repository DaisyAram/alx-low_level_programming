#include "lists'h"
#include <stdlib.h>

/**
 *
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
