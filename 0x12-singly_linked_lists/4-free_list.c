#include "lists.h"
/**
 * free_list - free members of list
 * @head: pointer to list_t.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head)
	{
		tmp = head;

		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
