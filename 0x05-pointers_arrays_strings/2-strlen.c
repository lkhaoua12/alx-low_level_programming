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

	for (i = 0; i < *s; i++)
	{
		i++;
	}
	return (i); 
}
