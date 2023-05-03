#include "lists.h"
/**
 * sum_listint - a function that handle a linked list.
 * @head: pointer to the first node.
 * Return: the sum of the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
