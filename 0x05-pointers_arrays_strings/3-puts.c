#include "main.h"
#include <string.h>

/**
 * _puts - prints out a string
 * @str: gets the string var
 *
 * Return: void
 */

void _puts(char *str)
{
	size_t length = strlen(str);

	for (size_t i = 0; i < length; i++)
	{
		_puts(str[i]);
	}
}
