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
	size_t len = strlen(str);

	if (str == NULL)
		return (NULL);

	strP = (char *)malloc(sizeof(char) * len);

	if (strP == NULL)
	{
		return (NULL);
	}
	else
	return (strcpy(strP, str));
}
