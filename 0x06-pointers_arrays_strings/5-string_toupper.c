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
		if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
