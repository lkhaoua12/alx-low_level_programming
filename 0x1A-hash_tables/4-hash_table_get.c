#include "hash_tables.h"

/**
 * hash_table_get - function that get the node given a key
 * @ht: hash table to search
 * @key: key to use to look the table
 *
 * Return: value given the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (strdup(temp->value));
		temp = temp->next;
	}
	return (NULL);
}
