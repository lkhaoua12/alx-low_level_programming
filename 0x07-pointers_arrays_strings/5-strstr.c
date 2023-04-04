#include "main.h"

/**
 * _strstr - searches a string for a substring
 *
 * @haystack: first string
 * @needle: substring to look for
 * Return: pointer to haystack.
 */


char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		return (haystack + i);
	}
	return ('\0');
}
