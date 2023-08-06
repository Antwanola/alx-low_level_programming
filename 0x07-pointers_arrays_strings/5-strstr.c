#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = needle;

		while (*a != '\0')
		{
			if (*haystack == *a  && *a != '\0')
			{
				return (haystack);
			}
			a++;
		}

		haystack++;
	}

	return (0);
}
