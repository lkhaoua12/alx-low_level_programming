#include "function_pointers.h"
/**
 * print_name - Executes the function pointed to by f
 *
 * @name: A pointer to a string that represents the name to be printed.
 * @f: A function pointer that points to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
