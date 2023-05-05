#include "main.h"
/**
 * get_bit - returns the value of the bit at a
 *		specified index in a given number
 *
 * @n: the number to extract the bit from
 * @index: the index of the bit to extract
 *		(0 is the least significant bit)
 *
 * Return: the value of the bit at the specified index,
 *		or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1UL;

	i <<= index;

	if (n & i)
		return (1);
	else
		return (0);
}
