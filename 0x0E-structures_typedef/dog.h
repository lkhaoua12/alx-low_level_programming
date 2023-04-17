#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that represents a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif