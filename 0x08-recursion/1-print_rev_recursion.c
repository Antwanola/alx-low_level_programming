#include "main.h"
/**
 * _print_rev_recursion - Takes a tring and return the reverse
 * Description: Takes a string and return rev
 * @s: Input string
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
