#include "main.h"
/**
 * create_array - create an arrey with malloc.
 * @size: size of the array.
 * @c: char to pust in zero index.
 * Return: a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size);
	unsigned int i = 0;

	if (!size || !p)
	{
		return (0);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
