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
	dog_t *stroredName;
	dog_t *storedOwner;
	newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);
	storedName = strdup(name);
	newDog->name = storedName;
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}
	storeOwner = strdup(owner);
	newDog->owner = storeOwner;
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
