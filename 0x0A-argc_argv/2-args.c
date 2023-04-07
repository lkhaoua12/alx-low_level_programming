#include <stdio.h>

/**
 * main - Main entry point
 * @argc: argument count.
 * @argv: argument value.
 * Return: success (0).
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
