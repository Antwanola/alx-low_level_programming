#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- concatenates strings
 * @s1: first string
 * @s2: second string
 * @n:  number of bytes to be concatenanted
 * Return: char or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, i = 0, concatLen, j = 0, f = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	concatLen = (n >= len2) ? len1 + len2 : len1 + n;
	ptr = malloc(sizeof(*ptr) * concatLen + 1);
	if (!ptr)
		return  (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	if (n >= len2)
	{
		while (s2[j] != '\0')
		{
			ptr[len1 + j] = s2[j];
			j++;
		}
		ptr[len1 + j] = '\0';
		return (ptr);
	}
	else
	{
	while (f < n && s2[f] != '\0')
	{
		ptr[len1 + f] = s2[f];
		f++;
	}
	ptr[len1 + f] = '\0';
	return (ptr);
	}
}
