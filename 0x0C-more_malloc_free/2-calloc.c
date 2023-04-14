#include "main.h"

/**
 *
 *
 *
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
 * string_nconcat - concat two string;
 * @s1: first string.
 * @s2: second string.
 * @n: size from s2 to copy
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p; 

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * sizeof(int));
	if (!p)
		return (NULL);
	setmemory(p, nmemb * sizeof(int), 0);
	return (p);
}


