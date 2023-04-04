#include "main.h"

/**
 *
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i, total1 = 0;

	for (i = 0; i < size; i++)
	{
		total1 = a[i];
		a++;
	}
	printf("%d", total1);
}
