#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog_t struct and its elements
 * @d: Pointer to the dog_t struct to free
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
