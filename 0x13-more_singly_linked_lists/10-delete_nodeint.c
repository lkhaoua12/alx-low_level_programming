#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node.
 *
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *prev;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	prev = *head;
	tmp = (*head)->next;

	while (tmp != NULL && i < index - 1)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}

	if (i == index - 1 && tmp != NULL)
	{
		prev->next = tmp->next;
		free(tmp);
		return (1);
	}

	return (-1);
}

