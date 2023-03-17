/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>

int main()
{
	char c;

	c = 'a';
	for( c; c != 'z'; c++ )
	{
	putchar(c);
	}
	putchar("\n");
	return 0;
}
