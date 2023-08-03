#include "main.h"
/**
 * _puts_recursion - prints the string using recursion
 * Description: Takes a string and prints using recursion
 * @s: inut string
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
