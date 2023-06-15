#include "lists.h"
/**
 * add_dnodeint - Adds a new node.
 * @head: Pointer to a pointer to the head node.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
