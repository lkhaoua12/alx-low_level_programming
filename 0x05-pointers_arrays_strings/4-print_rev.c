#include "main.h" 
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int c = 0;
	char *i;
	for (i = s; *i != '\0'; i++)
	{
		c++;
	}

	for (c -= c; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	putchar('\n');
}
