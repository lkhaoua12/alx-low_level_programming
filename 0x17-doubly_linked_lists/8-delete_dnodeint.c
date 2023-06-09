#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a specific idx.
 * @head: the first node in the list.
 * @index: index of the node to delete.
 * Return: 1 if succed, -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || head == NULL)
	{
		return (-1);
	}
	if (temp == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
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
