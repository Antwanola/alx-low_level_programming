#include "main.h"

/**
 * _strlen_recursion - finds the string len with recursion
 * @s: Input string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s != '\0')
	{
		r++;
		r = r + _strlen_recursion(s + 1);
	}
	else
		return (0);

	return (r);
}
