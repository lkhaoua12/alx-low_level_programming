#include "main.h"

/**
 * malloc_checked - allocate memory size b;
 * @b: size of memory to allocate.
 * Return: Void pointer.
 */


void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
