#include "main.h"
/**
 * _strncpy - copies the source string to destination
 * Description: Copies strings in nth number
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of strings to copy (Photocopy ko Easy)
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
