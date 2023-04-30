#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @n: integer value to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if memory allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));
	listint_t *current;

	if (!new_end)
	{
		return (NULL);
	}

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	current = *head;
	while (current && current->next)
	{
		current = current->next;
	}

	current->next = new_end;

	return (new_end);
}

