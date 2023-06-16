#include "lists.h"
/**
 * get_dnodeint_at_index - return node at index.
 * @head: the first node in the linked list.
 * @index: index to return.
 * Return: pointer to node in the linked list.
 */

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
