#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: an unsigned int
 * Return: pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n = 0;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);
	if (size < 1)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;

	while (n < size)
	{
		new_table->array[n] = NULL;
		n++;
	}
	return (new_table);
}
