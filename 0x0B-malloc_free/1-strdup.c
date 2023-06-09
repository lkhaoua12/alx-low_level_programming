#include "main.h"

/**
 * get_lenght - get string lenght.
 * @str: string to check it lenght.
 * Return: int.
 */

int get_lenght(char *str)
{
	int lenght = 0;

	while (*str)
	{
		lenght++;
		str++;
	}
	return (lenght);
}

/**
 * _strdup - copy a string to heap.
 * @str: string to copy.
 * Return: a pointer to string.
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (!str)
	{
		return (NULL);
	}
	p = (char *)malloc(get_lenght(str) + 1);

	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < get_lenght(str); i++)
	{
		*(p + i) = *(str + i);
	}
	return (p);
}
