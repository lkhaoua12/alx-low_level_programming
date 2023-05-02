#include "lists.h"
/**
 * pop_listint - removes the first element of a linked list
 * @head: pointer to pointer to the first node of the linked list
 *
 * Return: the value of the removed node, or -1 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head, *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	n = (*head)->n;
	new_head = (*head)->next;
	*head = new_head;
	free(tmp);
	return (n);
}

