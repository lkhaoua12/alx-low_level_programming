#include "variadic_functions.h"


void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p);
	for (i = n; i > 1; i--)
	{
		printf("%d%s", va_arg(p, int), separator ? separator : "");
	}
	printf("%d\n", va_arg(p, int));
	va_end(p);
}
