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
	char *strP;
	char *t;
	size_t len = strlen(str);

	if (str == NULL)
		return (NULL);
	t = (char *)malloc(sizeof(char) * len + 1);

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		strP = strcpy(t, str);
		return (strP);
	}

	free(t);
}
