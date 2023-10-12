#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array.
 *
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size);
	int prev = 0, step = 0;

	if (array == NULL || (int)size == 0)
		return (-1);
	while (prev < (int)size - 1 && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += m;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (prev <= (int)size - 1)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}
	return (-1);
}
