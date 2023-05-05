#include "main.h"


int get_endianness(void)
{
	long unsigned i = 1;
	char *p;

	p = (char *)&i;
	if (*p == 1)
		return (1);
	else
		return (0);
}
