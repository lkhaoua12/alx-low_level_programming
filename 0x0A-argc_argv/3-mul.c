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
	int sum = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
