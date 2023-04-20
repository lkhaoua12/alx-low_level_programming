#include "function_pointers.h"
/**
 * int_index - Searches for an integer inside an array.
 *
 * @array: Pointer to the integer array.
 * @size: Size of the integer array.
 * @cmp: Pointer to the function used to compare integers.
 *
 * Return: Index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
