#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*_strcpy - string copier
*@dest: pointer for dest str
*@src: pointer storing string to copy
*Return: copied
*/

char *_strcpy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}


/**
  * _strlen- stringlength
  * @s: string
  * Return: int
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * new_dog- The new dog typedef func
 * @name: name
 * @age: age
 * @owner: onwer
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;
	int len1 = 0, len2 = 0;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (len1 + 1));
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
