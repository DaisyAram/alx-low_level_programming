void free_list(list_t *head)
{
	list_t *temp;

	while (list_t != NULL)
	{
	temp = head->next;
	free(head->str);
	free(head);
	}
}
