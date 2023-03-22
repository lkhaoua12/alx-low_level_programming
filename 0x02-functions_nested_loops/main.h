#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

#include <stdio.h>


int _putchar(char c)
{
	return (write(1, &c, 1));
}


#endif

