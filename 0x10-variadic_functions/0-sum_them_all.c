#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
	{
		result = result + va_arg(ap, int);
	}
	va_end(ap);
	return (result);

}
