#include "main.h"
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

