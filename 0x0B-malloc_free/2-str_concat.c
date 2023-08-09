#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concat string to a malloc pointer
 * @s1: firs tring
 * @s2: econd string
 * Return: char or Null
 */


char *str_concat(char *s1, char *s2)
{
	size_t len = strlen(s1);
	size_t len2 = strlen(s2);
	char *strP = NULL;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	strP = (char *)malloc(len + len2 + 1);

	if (strP == NULL)
		return (NULL);

	strcpy(strP, s1);
	strcpy(strP, s2);

	return (strP);


}
