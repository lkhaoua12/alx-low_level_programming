#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
