#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm.
 *
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;
	int curr;

	if (!array || size == 0)
		return (-1);

	while (array[MIN(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
			return (-1);
	}

	curr = prev;
	while (array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += 1;
		if (curr == MIN(step, size))
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	if (array[prev] == value)
		return (prev);

	return (-1);
}
