#include "stdio.h"
#include "dog.h"

/**
 * new_dog - a function that creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len = 0;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (name[len] != '\0')
		len++;
	new->name = malloc(sizeof(char) * (len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		(*(new->name + i)) = name[i];
	(*(new->name + i)) = '\0';
	new->age = age;
	len = 0;
	while (owner[len] != '\0')
		len++;
	new->owner = malloc(sizeof(char) * (len + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		(*(new->owner + i)) = owner[i];
	(*(new->owner + i)) = '\0';
	return (new);
}
