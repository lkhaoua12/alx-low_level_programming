#include "lists.h"
/**
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
