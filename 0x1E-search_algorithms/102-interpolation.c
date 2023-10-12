#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array.
 *
 * @array: Pointer to the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the 'value'.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		size_t pos = low + (((double)(high - low)
			/ (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
	}
	return (-1);
}
