#include "search_algos.h"
#include <stddef.h>
/**
 * linear_search - Linear search algorithm to find a value in an array.
 *
 * @array: Pointer to the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found.
 *         If the value is not found, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
