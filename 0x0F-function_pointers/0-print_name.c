#include "function_pointers.h"
/**
 * print_name - Executes the function pointed to by f and passes it the name parameter
 *
 * @name: A pointer to a string that represents the name to be printed.
 * @f: A function pointer that points to a function that takes a string argument and returns void.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
