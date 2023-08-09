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
	char *t = NULL;
	size_t len = strlen(str);
	int i;

	if (str == NULL)
		return (NULL);
	t = (char *)malloc(sizeof(char) * len + 1);

	if (t == NULL)
		return (NULL);
	for (i = 0; i <= len + 1; i++)
		t[i] = str[i];

	return (t);

}
