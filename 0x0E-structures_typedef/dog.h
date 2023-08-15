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
void print_dog(struct dog *d);

/**
 * struct dog_t- typedef for dog_t
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: A typedef dog_t
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
