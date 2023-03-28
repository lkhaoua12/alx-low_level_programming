#include "main.h"
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i;
	for (i = 0; i < strlen(str) - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(str[i]);
}
