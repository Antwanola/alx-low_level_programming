#include "main.h"

/**
 * _abs - returns the absolute number of any form of numbers
 *
 * Description: the function return absolute value
 *@n: takes in int values
 *
 *Return: n as a number this time
 */

int _abs(int n)
{
	if (n < 0)
	{
		return  (-1 * n);
	}
	return (n);
}
