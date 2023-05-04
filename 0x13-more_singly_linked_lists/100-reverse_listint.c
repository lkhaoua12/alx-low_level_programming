#include "lists.h"
/**
 * reverse_listint - Reverses a linked list in place.
 * @head: Pointer to pointer to the first node of the list.
 *
 * Return: Pointer to the new first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return *head;
}

