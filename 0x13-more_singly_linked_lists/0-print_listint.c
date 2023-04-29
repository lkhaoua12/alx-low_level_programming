#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list of integers
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *b = h;

	while (b)
	{
		printf("%d\n", b->n);
		i++;
		b = b->next;
	}
	return (i);
}
