#include "3-calc.h"
/**
 * main - Entry point for the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int result;
	int (*right_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[2]) != '+' && *(argv[2]) != '-' && *(argv[2]) != '*'
			&& *(argv[2]) != '/' && *(argv[2]) != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && (*(argv[3]) == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	right_func = get_op_func(argv[2]);
	result = right_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
