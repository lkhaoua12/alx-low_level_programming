#include "main.h"
/**
 * _strlen - check string lenght
 * @s: string to check
 * Return: int
 */

int _strlen(char *s)
{
	int lenght = 0;

	if (*s > '\0')
	{
		return (lenght += _strlen(s + 1) + 1);
	}
	return (lenght);
}

/**
 * _ispali - check if s is palindrom
 * @s: string to check
 * @lenght: lenght of string to check
 * Return: int
 */

int _ispali(char *s, int lenght)
{
	if (lenght <= lenght / 2)
	{
		return (1);
	}
	else if (*s == *(s + lenght - 1))
	{
		return (_ispali(s + 1, lenght - 1 - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if s is palindrom with len
 * @s: string to check
 * Return: int
 */

int is_palindrome(char *s)
{
	int lenght = _strlen(s);

	return (_ispali(s, lenght));
}
