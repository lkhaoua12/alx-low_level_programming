#include "main.h"
/**
 * binary_to_uint - turn a string of binary to an unsigned int.
 * @b: string of binary
 * Return: unsigned int (num)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b == '0')
			num = num << 1;
		else if (*b == '1')
			num = (num << 1) | 1;
		else
			return (0);
	}
	return (num);
}
