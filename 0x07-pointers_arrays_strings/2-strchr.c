#include "main.h"
/**
*_strchr - function to locate a char in a string
*@s: the string
*@c: the char to be located
*Return: Char or Null
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
