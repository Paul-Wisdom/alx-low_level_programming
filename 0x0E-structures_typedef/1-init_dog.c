#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d: struct dog variable
 * @name: namer
 * @age: dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
