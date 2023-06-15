#include "lists.h"
/**
 * print_dlistint - print all nodes of a dlinked_list.
 * @h: point to the head of the list.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numberOfNode = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		numberOfNode += 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (numberOfNode);
}
