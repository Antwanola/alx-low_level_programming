#include "main.h"

/**
 * _isupper - function to take char in and determine if its a uppercase or not
 *
 * Description: takes in vals and know whether upper or not
 *
 * @c: the input
 *
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
