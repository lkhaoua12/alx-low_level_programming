#include "main.h" 
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	char *rt;

	for (rt = str; *rt != '\0'; rt++)
	{
		putchar(*rt);
	}
	putchar('\n');
}
