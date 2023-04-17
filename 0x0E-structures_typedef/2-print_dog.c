#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the information of a dog.
 * @d: A pointer to a struct dog.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
