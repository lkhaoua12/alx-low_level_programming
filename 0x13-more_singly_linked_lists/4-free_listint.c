#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if(!tmp)
	{
		return (NULL);
	}

	while (tmp)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}


