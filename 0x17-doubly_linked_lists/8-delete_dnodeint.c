#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned i;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	
	if (temp = *head)
	{
		*head = (*head)->next
		if ((*head)->next != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
