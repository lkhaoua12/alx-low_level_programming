#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: pointer to the string to be added to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_copy;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (!new_node)
		return (NULL);

	str_copy = strdup(str);
	if (!str_copy)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;

	}
	return (new_node);
}
