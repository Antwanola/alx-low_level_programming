#include "main.h"

/**
 * _isalpha -  the main entry
 *
 * Description: The aphabet checker
 *@c: enter a value here
 * Return: 0 or 1 as usual or
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
