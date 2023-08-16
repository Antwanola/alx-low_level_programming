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
	dog_t *newDog = NULL;

	if (!name || !owner)
		return (NULL);
	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);
	newDog->name = malloc(strlen(name) + 1);
	newDog->owner = malloc(strlen(owner) + 1);
	newDog->age = age;
	if (!newDog->name || !newDog->owner)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
	}
	else
	{
		strcpy(newDog->name, name);
		strcpy(newDog->owner, owner);
		return (newDog);
	}
}
