/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>

int main()
{
	int alph;

	alph = 'a';
	for( alph; alph != 'z'; alph++ )
	{
	putchar(alph);
	}
	putchar("\n");
	return 0;
}
