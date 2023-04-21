#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with separator
 *
 * @separator: string to be printed between numbers
 * @n: number of numbers passed as arguments
 * ...: variable number of integers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	for (i = n; i > 1; i--)
	{
		printf("%d%s", va_arg(p, int), separator ? separator : "");
	}
	printf("%d\n", va_arg(p, int));
	va_end(p);
}
