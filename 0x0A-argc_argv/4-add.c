#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main entry point
 * @argc: argument count.
 * @argv: argument value.
 * Return: success (0).
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
