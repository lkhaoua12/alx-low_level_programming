#include "main.h"
/**
 * swap_int - Entry point
 * 
 * @*a: describe the parameter
 * 
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c, d;
	
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}


