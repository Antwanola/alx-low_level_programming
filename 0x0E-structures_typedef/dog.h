#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: A dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
