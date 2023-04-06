#include "main.h"

/**
 * square_rot - check square
 * @a: int num
 * @checker: int num to decremnt
 * Return: int
 */

int square_rot(int a, int checker)
{
	if (checker * checker == a)
	{
		return (checker);
	}
	else if (checker >= a / 2)
	{
		return (-1);
	}
	else
	{
		return (square_rot(a, checker + 1));
	}
}

/**
 * _sqrt_recursion - check square
 * @n: int num
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square_rot(n, 1));
}

