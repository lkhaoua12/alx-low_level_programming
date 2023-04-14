#include "main.h"

/**
 * setmemory - set all bytes to 0
 * @p: pointer to the memory address.
 * @s: size of bytes.
 * @a: 0
 * Return: a void pointer.
 */

char *setmemory(char *p, unsigned int s, char a)
{
	char *ptr = p;

	while (s--)
	{
		*ptr = a;
		ptr++;
	}
	return (ptr);
}

/**
 * _calloc - concat two string;
 * @nmemb: size of bytes.
 * @size: size of int.
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * sizeof(int));
	if (p == 0)
		return (NULL);
	setmemory(p, nmemb * sizeof(int), 0);
	return (p);
}


