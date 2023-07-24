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
	size_t i;
	size_t take;

	for (i = 0; i < length; i++)
	{
		take = str[i];
		_puts(take);
	}
}
