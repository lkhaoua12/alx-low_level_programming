#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int row;

	for (row = 0; row <= 10; row++)
	{
		int colums;

		for (colums = 0; colums <= 14; colums++)
		{
			int num = colums;

			if (colums > 9)
			{
				_putchar(1 + 48);
				num %= 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
