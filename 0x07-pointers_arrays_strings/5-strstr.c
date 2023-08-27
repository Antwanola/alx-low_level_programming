#include "main.h"


/**
  * _strstr- the func to print substring
  * @haystack: word to split
  * @needle: word to compare
  * Return: strin
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
