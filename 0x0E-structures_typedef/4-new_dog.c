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
	if (!name || !owner)
		return (NULL);

	dog_t *newDog =(dog_t *)malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	newDog->age = age;

	return (newDog);
	free(newDog);
}
