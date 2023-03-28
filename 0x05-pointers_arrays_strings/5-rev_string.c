#include "main.h"

/**
 * print_triangle.
 * 
 */

void rev_string(char *s)
{
	int lenght = strlen(s);
	int middle = lenght / 2;
	
	int i;
	char temp;

	for (i = 0; i <= middle; i++)
	{
		temp = s[i];
		s[i] = s[lenght -i -1];
		s[lenght - i -1] = temp;
	}

}
