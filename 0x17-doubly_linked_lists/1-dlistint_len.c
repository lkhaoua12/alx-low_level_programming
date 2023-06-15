#include "lists.h"
/**
 * dlistint_len - return number of nodes of a dlinked_list.
 * @h: point to the head of the list.
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numberOfNode = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		numberOfNode += 1;
		temp = temp->next;
	}
	return (numberOfNode);
}
