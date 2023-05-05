#include "main.h"
/**
 * set_bit - set a bit at specific index
 * @n: the num to change it bit
 * @index: index to set to 1.
 * Return: 1 (int);
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i <<= index;
	*n = *n | i;

	return (1);
}
