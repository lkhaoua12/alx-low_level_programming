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
 * str_concat - concat two string
 * @s1: first string
 * @s2: second string
 * Return: a char pointer.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *p = (char *)malloc(get_lenght(s1) + get_lenght(s2) + 1);

	for (i = 0; i < get_lenght(s1); i++)
	{
		*(p + i) = *(s1 + i);
	}
	if (s2)
	{
		for (i = 0; i < get_lenght(s2); i++)
		{
			*(p + get_lenght(s1) + i) = *(s2 + i);
		}
	}

	return (p);
}
