#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: Pointer to pointer to the first node of the list.
 *
 * Return: Pointer to the new first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	int length = 0, i;
	listint_t *tmp, *last_node, *current_node, *next_node;

	if (*head == NULL)
		return (NULL);

	tmp = *head;

	while (tmp)
	{
		length++;
		tmp = tmp->next;
	}

	current_node = *head;
	last_node = NULL;

	for (i = 0; i < length; i++)
	{
		next_node = current_node->next;
		current_node->next = last_node;
		last_node = current_node;
		current_node = next_node;
	}

	*head = last_node;

	return (*head);
}

