#include <stdio.h>
#include "dog.h"

/**
 * print_dog- print dog struct element
 * @d: the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nill)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}
