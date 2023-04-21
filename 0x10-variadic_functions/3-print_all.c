#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * get_string - Prints a string argument.
 * @seperator: The string separator to use.
 * @p: The va_list containing the argument to print.
 */
void get_string(char *seperator, va_list p)
{
	char *stri = va_arg(p, char *);

	if (!stri)
	stri = "(nil)";
	printf("%s%s", seperator, stri);
}
/**
 * get_float - Prints a float argument.
 * @seperator: The string separator to use.
 * @p: The va_list containing the argument to print.
 */
void get_float(char *seperator, va_list p)
{
	printf("%s%f", seperator, va_arg(p, double));
}
/**
 * get_char - Prints a char argument.
 * @seperator: The string separator to use.
 * @p: The va_list containing the argument to print.
 */
void get_char(char *seperator, va_list p)
{
	printf("%s%c", seperator, va_arg(p, int));
}
/**
 * get_int - Prints an int argument.
 * @seperator: The string separator to use.
 * @p: The va_list containing the argument to print.
 */
void get_int(char *seperator, va_list p)
{
	printf("%s%d", seperator, va_arg(p, int));
}
/**
 * print_all - Prints a list of arguments of different types.
 * @format: A format string containing the type of each argument.
 * @...: A variable number of arguments to print.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list p;
	char *seperator = "";

	print_t print[] = {
	{'c', get_char},
	{'s', get_string},
	{'i', get_int},
	{'f', get_float},
	{'\0', NULL}
	};

	va_start(p, format);
	while (format && format[i])
	{
	j = 0;
	while (print[j].print)
	{
		if (print[j].print == format[i])
		{
			print[j].f(seperator, p);
			seperator = ", ";
			break;
		}
		j++;
	}
	i++;
	}
	printf("\n");
	va_end(p);
}

