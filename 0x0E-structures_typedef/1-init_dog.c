#include "dog.h"
/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to a dog struct
 * @name: Pointer to the dog's name
 * @age: Float value for the dog's age
 * @owner: Pointer to the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
