#include "search_algos.h"
/**
 * binary_search - Binary search algorithm.
 *
 * @array: Pointer to the sorted array to search.
 * @size: The size of the array to search.
 * @value: The value to search for.
 * Return: index if value found else (-1).
 */
int binary_search(int *array, size_t size, int value)
{

	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		int middle, i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
