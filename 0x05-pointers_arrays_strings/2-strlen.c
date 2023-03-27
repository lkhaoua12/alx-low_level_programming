#include "main.h" 
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
	int i;
	int c = 0;

	for (i = 0; i < *s; i++)
	{
		c++;
	}
	return (c); 
}
