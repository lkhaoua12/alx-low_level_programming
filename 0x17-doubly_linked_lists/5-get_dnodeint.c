#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
