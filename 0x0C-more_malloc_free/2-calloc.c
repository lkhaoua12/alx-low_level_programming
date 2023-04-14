#include "main.h"

/**
 * string_nconcat - concat two string;
 * @s1: first string.
 * @s2: second string.
 * @n: size from s2 to copy
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = malloc(nmemb * size);
	
	if (!p)
		return (NULL);
	for (i = 0 ;i < nmemb; i++)
	{
		*(p + i) = 0;
	}

	return (p);
}
