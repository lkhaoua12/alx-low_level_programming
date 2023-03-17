/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c == 'e' || c == 'q')
	c++;
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
