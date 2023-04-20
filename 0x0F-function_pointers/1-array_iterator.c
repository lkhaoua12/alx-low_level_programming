#include "function_pointers.h"
/**
 * array_iterator - Iterates over an integer array and applies the action function to each element
 *
 * @array: A pointer to the first element of the integer array
 * @size: The size of the array
 * @action: A function pointer 
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i, *last_element;
		last_element = array + size - 1;
		for (i = 0; (array + i) <= last_element; i++)
			action(*(array + i));
	}
}
