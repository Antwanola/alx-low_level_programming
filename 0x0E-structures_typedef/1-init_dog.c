#include <stdio.h>
#include"dog.h"
/**
 * init_dog-initialize dog struct
 * @d: the struct
 * @ name: the name val
 * @age: the age val
 * @owner: the owner val
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
