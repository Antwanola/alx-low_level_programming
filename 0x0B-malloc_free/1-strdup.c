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
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++);

	strP = (char *)malloc(n + 1 * sizeof(char));
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
