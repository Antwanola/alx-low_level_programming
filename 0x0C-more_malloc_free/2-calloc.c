#include "main.h"
#include <stdlib.h>



/**
 * *_memset-sets each given char to the pointer s
 * Description: sets s to be the value of char b in memory
 * @s: The buffer string
 * @b: The char to be set
 * @n: the size of
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - creats space for each member of an array using malloc
 * @nmemb: Each member of the array
 * @size: The size of each pace needed to be allocate for each member
 *
 * Return: Address to the pointer 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);

}
