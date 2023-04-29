#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the linked list
 * @n: integer value to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if memory allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!new_head)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
