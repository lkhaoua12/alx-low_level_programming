#include "main.h"
/**
 * is_prime_number - check if n is prime
 * @n: int number to check
 * Return: int
 */

int prime_check(int n, int i);	
int is_prime_number(int n)
{
	return(prime_check(n, 2));
}

int prime_check(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}	
