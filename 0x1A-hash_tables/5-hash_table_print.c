#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash-table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int first_node = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (first_node== 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			first_node = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
