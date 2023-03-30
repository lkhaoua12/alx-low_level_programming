#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @n: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *n)
{
	int i;
	int j;
	char line1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char line2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == line1[j])
			{
				n[i] = line2[j];
				break;
			}
		}
	}
	return (n);
}
