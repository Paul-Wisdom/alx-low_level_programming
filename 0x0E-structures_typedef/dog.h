#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include "stdlib.h"
/**
 * struct dog - structure for dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*endif for DOG_H*/
