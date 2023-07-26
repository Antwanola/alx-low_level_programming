#include <stdio.h>
#include <string.h>
/**
 * _strncat - Takes dest and src with a number to be added from src
 * @dest: destination string
 * @src: src string
 * @n: number of strings to be added
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
