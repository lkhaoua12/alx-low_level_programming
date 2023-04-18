#include "dog.h"
#include <stdlib.h>
/**
 * strl - Calculates the length of a string.
 *
 * @str: A pointer to the string to be measured.
 *
 * Return: The length of the string, excluding the null terminator.
 */
int strl(char *str)
{
	int lenght = 0, i = 0;

	while (*(str + i++))
	{
		lenght++;
	}
	return(lenght);
}
/**
 * strcp - Copies a string to a destination buffer.
 *
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string to be copied.
 *
 * Return: A pointer to the destination buffer.
 */
char *strcp(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return dest;
}
/**
 * new_dog - Creates a new dog_t struct.
 *
 * @name: A pointer to the name of the dog.
 * @age: The age of the dog.
 * @owner: A pointer to the name of the dog's owner.
 *
 * Return: A pointer to the newly-created dog_t struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;

	if (!name || age < 0 || !owner)
		return (NULL);
	dogo = malloc(sizeof(dog_t));
	if (!dogo)
		return (NULL);
	dogo->name = malloc(sizeof(char) * strl(name) + 1);
	if (!dogo->name)
	{
		free(dogo);
		return (NULL);
	}
	dogo->owner = malloc(sizeof(char) * strl(owner) + 1);
	if (!dogo->owner)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	dogo->name = strcp(dogo->name, name);
	dogo->owner = strcp(dogo->owner, owner);
	dogo->age = age;
	return (dogo);
}
