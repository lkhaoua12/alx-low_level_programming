#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_most_numbers(void)
{
	int i;
	
	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	
}
