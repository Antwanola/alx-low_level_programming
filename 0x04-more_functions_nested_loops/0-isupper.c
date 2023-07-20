#include "main.h"

/**
 * _isupper - function to take char in and determine if its a uppercase or not
 *
 * Description: takes in vals and know whether upper or not
 *
 * @c: the input
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
}
