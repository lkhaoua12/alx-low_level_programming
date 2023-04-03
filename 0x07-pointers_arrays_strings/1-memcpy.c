#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination string.
 * @src: source to copy from.
 * @n: number of bytes.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
