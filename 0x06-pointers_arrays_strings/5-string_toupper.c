#include "main.h"
/**
 * _strcat - concat two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *string_toupper(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
