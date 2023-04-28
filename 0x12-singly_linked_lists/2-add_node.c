#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: pointer to the string to be added to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *buffer;
	size_t i = 0;
	list_t *temp;

	buffer = malloc(strlen(str) + 1);

	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	while (i < strlen(str))
	{
		*(buffer + i) = *(str + i);
		i++;
	}
	*(buffer + i) = '\0';

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->str = buffer;
	temp->next = *head;
	*head = temp;
	return (temp);
}
