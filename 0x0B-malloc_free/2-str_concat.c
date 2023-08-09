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
	int i, d = 0;
	size_t len1, len2;
	char *strP = NULL;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	for (len1 = 0; s1[len1] !='\0'; len1++);

	for (len2 = 0; s2[len2] != '\0'; len2++);

	strP = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	
	for (i = 0; s1[i] != '\0'; i++)
		strP[i] = s1[i];
	
	for (; s2[d] != '\0'; i++)
	{
		strP[i] = s2[d];
		d++;
	}
	return (strP);


}
