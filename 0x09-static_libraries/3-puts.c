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
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

