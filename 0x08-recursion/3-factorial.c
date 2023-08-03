#include "main.h"
/**
 * factorial- get the factorial of inputed val
 * @n: input val
 * Return: int
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
