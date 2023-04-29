#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t lenght = 0;

	if (h)
	{
		while (h)
		{
			lenght++;
			h = h->next;
		}
	}
	return (lenght);
}
