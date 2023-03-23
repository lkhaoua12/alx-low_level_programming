#include "main.h"

/**
 * main - Entry point
 *
 * Return: ALways 0
 */
void print_diagonal(int n)
{
	int i;
	
	if (n == 0)
   	_putchar('\n');
	else
	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j < i; j++)
		{
			_putchar(32);
		}		
		_putchar(92);
		_putchar('\n');
	}
}
