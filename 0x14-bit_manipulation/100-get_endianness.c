#include "main.h"
/**
 * get_endianness - check if cpu is liitle or big endian
 * Return: 0 if liitle indian 1 otherwise
 */

int get_endianness(void)
{
	unsigned long int i = 1;
	char *p;

	p = (char *)&i;
	if (*p == 1)
		return (1);
	else
		return (0);
}
