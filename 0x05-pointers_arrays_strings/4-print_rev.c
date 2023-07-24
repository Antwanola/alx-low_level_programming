#include "main.h"
#include <string.h>
/**
 * print_rev - entry point
 * @s: this is where the string goes
 *
 * Return: void
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
