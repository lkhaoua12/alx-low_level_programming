#include "main.h"
/**
 * factorial - count the lenght of a string.
 *
 * @n: factorial
 * Return: n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n *= factorial(n - 1));
	}
}
