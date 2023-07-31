#include "main.h"
/**
 * *_memcpy - copies string from memory
 * Description: This code copies strings from memory to a dest
 * @dest: destination
 * @src: source
 * @n: int size of the string
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		dest[i] = src[i];
	return (dest);
}
