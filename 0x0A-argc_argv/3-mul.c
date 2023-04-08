#include <stdio.h>

/**
 * main - Main entry point
 * @argc: argument count.
 * @argv: argument value.
 * Return: success (0).
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc <= 1)
	{
		printf("Error\n");
	}
	else
	{
		sum = ((int) *(argv[1]) - '0') * ((int) *(argv[2]) - '0');
		printf("%d\n", sum);
	}
	return (0);
}
