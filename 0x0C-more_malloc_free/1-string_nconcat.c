#include "main.h"

/**
 * string_nconcat - concat two string;
 * @s1: first string.
 * @s2: second string.
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	p = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
