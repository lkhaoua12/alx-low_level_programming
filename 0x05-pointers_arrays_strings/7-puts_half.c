#include "main.h"
#include <string.h> 
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */


void puts_half(char *str)
{
	int lenght = strlen(str);
	int middle = lenght / 2;
	if middle % 2 == 0;
	middle += 1;

	int i;
	for (i = middle; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
