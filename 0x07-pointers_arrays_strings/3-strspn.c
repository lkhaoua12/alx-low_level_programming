#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: prefix string
 * Return: Unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (accept[j] != s[i] && accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
