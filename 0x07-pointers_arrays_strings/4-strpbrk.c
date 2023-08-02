#include "main.h"
/**
 * _strpbrk - returns pointer to the matching string
 * Description: Gets string and matching string and returns pointer
 * @s: Input string
 * @accept: check preference string
 * Return: pointer char
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}

