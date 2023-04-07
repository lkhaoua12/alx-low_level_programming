#include "main.h"


int _atoi(char *s)
{
	int i, num;
	unsigned int c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		num = s[i] + '0';
		if (num >= 0 && num <= 9)
		c = c * 10 - num;
	}
	return (c);
}
