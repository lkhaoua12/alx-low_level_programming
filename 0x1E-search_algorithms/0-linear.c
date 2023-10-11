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
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
