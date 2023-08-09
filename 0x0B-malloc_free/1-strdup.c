#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup- duplicates copy of a string
 * @str: A pointer to the string to be duplicated
 * Return: NULL or the duplicated string
 */

char *_strdup(char *str)
{
	char *strP = NULL;
	unsigned int i;
	size_t len;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	strP = (char *)malloc(len + 1 * sizeof(char));

	if (strP != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strP[i] = str[i];
	} else
	{
		return (NULL);
	}
	strP[i] = '\0';
	return (strP);
}
