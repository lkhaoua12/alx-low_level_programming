#include "main.h"
/**
 * flip_bits - check the bits diffrence
 * @n: first num
 * @m: second num
 * Return: number of bits needed to be fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;

		xor >>= 1;
	}
	return (count);
}
