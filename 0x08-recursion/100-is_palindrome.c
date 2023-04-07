#include "main.h"
/**
 *
 *
 *
 */

int _strlen(char *s)
{
	int lenght = 0;
	
	if (*s > '\0')
	{
		return lenght += _strlen(s + 1) + 1;
	}
	return (lenght);
}

int _ispali(char *s, int lenght)
{
	if (lenght <= lenght / 2)
	{
		return (1);
	}
	else if (*s == *(s + lenght - 1))
	{
		return _ispali(s + 1, lenght - 1 - 1);
	}
	else
	{
		return (0);
	}
}

int is_palindrome(char *s)
{
	int lenght = _strlen(s);
	return _ispali(s, lenght);
}
