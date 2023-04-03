#include "main.h"

/**
 * _strchr - locates a character in a string
 * 
 * @s: string parameter.
 * @c: first concurence in s.
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s; *s++;)
	{
		if (*s == c)
		return (s);
	}
}
