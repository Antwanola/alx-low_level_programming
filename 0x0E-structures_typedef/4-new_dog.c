#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog-The new dog typedef func
 * @name: name
 * @age: age
 * @owner: onwer
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (!name || !owner)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);
	newDog->name = strdup(name);
	if (!newDog->name)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->owner = strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
