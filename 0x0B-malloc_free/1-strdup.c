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
	unsigned int len = strlen(str);
	char *final = NULL;

	if (str == NULL)
		return (NULL);

	strP = (char *)malloc(sizeof(char) * len + 1);

	if (strP == NULL)
	{
		return (NULL);
	}
	else
	final = (strcpy(strP, str));
	if (final == NULL)
	{
		return (NULL);
	}
	else
		return (final);

}
