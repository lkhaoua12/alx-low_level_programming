#include "main.h"
/**
 * print_binary - print a num in binary
 * @n: the num to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1UL;
	int found_one = 0;

	i = i << (sizeof(unsigned long int) * 8 - 1);
	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one)
		{
			_putchar('0');
		}
		i >>= 1;
	}
	if (!found_one)
		_putchar('0');
}
