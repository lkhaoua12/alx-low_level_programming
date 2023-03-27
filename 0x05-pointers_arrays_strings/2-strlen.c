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

int _strlen(char *s)
{
	char * i;
	int c = 0;

	for (i = s; *i != '\0' ; i++)
	{
		c++;
	}
	return (c); 
}
