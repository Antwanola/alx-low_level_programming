#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all numbers in argument
 * @n: the arg count
 * @...: infinit args
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list vars;
	int i = 0, sum = 0;

	va_start(vars, n);
	while (i < n)
	{
		sum += va_arg(vars, int);
		i++;
	}
	va_end(vars);
	return (sum);

}
