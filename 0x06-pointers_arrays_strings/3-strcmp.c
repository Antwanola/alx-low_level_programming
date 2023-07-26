#include "main.h"
/**
 * _strcmp - compare two strings
 * Description: This function takes two strings and compare if equal
 * @s1: first string
 * @s2: second string
 * Return: Int 0, -ve or +ve number as the case may be
 */

int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		break;

	}

		return (0);
}
