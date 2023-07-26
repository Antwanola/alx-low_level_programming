#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates strings
 * @dest: destination string
 * @src: source string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int len2 = strlen(src);
	int i;

	for (i = 0; i < len2; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
