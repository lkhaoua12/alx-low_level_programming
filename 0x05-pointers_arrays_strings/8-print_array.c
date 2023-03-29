#include "main.h"
/**
 * print_array - print an array
 * @a: the array to print
 * @n: number of element in array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	;
	else
	{
		for (i = 0; i < n - 1; i++)	
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
