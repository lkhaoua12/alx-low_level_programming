#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head node of the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the nth node of the linked list, or NULL if the node does
 *         not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head || !index)
	{
		return (NULL);
	}
	while (--index)
	{
		head = head->next;
	}
	return (head->next);
}
