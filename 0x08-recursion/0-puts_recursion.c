#include "main.h"
/**
 * _puts_recursion - puts charachters
 *
 * @s: string to ptint
 *
 */

void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s == '\0')
		putchar('\n');
	else
	_puts_recursion(s + 1);
}
