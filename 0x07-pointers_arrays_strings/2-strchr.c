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
	while (*s)
	{
		if (*s == c)
		return (s);
		else
		*s++;
	}
}
