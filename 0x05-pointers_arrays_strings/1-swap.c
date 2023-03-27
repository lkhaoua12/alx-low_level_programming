#include "main.h" 

/**
 *sawap int - sapiwn value of two pointers.
 *@ takkes two pointers.
 * return: void.
 */

void swap_int(int *a, int *b)
{
	int c, d;
	
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}


