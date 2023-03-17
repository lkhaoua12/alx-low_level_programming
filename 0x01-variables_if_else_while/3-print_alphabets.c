/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>

int main(void)
{
	char c;
        char C;

        C = 'A';
        c = 'a';
        for (c; c <= 'z'; c++)
        {
        putchar(c);
        }
        for (C; C <= 'Z'; C++)
        {
        putchar(C);
        }
        putchar('\n');
        return (0);
}
