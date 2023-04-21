#include "variadic_functions.h"

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
