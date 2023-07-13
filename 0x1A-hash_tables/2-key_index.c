#include "hash_tables.h"
/**
 * key_index - return the index given a key
 * @key: pointer to the key
 * @size: size of the array of the hash table
 * Return: index where key is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int id = hash_djb2(key) % size;
	return (id);
}
