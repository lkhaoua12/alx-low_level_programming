#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of integers passed as arguments
 * ...: variable number of integers to be summed
 *
 * Return: sum of all integers, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i = n;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	for (i = n; i > 0; i--)
	{
		result = result + va_arg(p, int);
	}
	va_end(p);
	return (result);

}
