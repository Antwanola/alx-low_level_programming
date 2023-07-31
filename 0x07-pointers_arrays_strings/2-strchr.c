#include "main.h"
/**
 * *_strchr- returns the pointer to s
 * @s: string
 * @c: char to look for
 * Return: char or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
