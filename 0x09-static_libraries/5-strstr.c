#include "main.h"
/**
 * _strstr - will locate a substring
 * @haystack: string containg the substring needle
 * @needle: the substring to be located
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return ('\0');
}

