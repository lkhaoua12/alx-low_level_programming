#include "main.h"
/**
 * array_range - creates an array of integers of a specified range.
 * @min: the minimum value of the range.
 * @max: the maximum value of the range.
 * Return: A pointer to the array of integers.
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(p + i) = min++;
	}
	return (p);
}
