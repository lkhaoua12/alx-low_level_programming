#include "main.h"
/**
 * _strlen_recursion - count the lenght of a string.
 *
 * @s: string to count
 * Return: count.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += (_strlen_recursion(s + 1) + 1);
	}
	return count;
}
