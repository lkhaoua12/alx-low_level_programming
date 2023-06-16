#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data.
 * @head: A pointer to the head node of the list.
 * Return: The sum of all the data in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
