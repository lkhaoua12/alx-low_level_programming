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
	while(s[c] != '\0')
	{
		c++;
	}
	for (c -= c; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	putchar('\n');
}
