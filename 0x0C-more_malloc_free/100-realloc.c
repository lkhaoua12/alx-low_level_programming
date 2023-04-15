#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with a call to malloc.
 * @old_size: The size in bytes of the allocated space for @ptr.
 * @new_size: The new size in bytes to be allocated for @ptr.
 * Return: If new_size == old_size, return ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newPtr;
	
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		newPtr = malloc(new_size);
		if (!newPtr)
			return (NULL);
		return (newPtr);
	}
	if (new_size > old_size)
	{
		newPtr = malloc(new_size);
		if (!newPtr)
			return (NULL);
		for (i = 0; i < new_size && i < old_size; i++)
		{
			*((char *)newPtr + i) = *((char *)ptr + i);
		}
		free(ptr);
		return (newPtr);
	}
}
