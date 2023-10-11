#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in a sorted array.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value if found, -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size);
	int start = 0, end = m;

	if (array == NULL)
		return (-1);

	while (end < (int)size - 1)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[end] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
			while (start <= end)
			{
				printf("Value checked array[%d] = [%d]\n", start, array[start]);
				if (array[start] == value)
				{
					return (start);
				}
				start++;
			}
		}
		start = end;
		end += m;
	}
	return (-1);
}
