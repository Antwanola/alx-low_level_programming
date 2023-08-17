#include <stdarg.h>

/**
 * sum_them_all - Sum all numbers in argument
 * @n: the arg count
 * @...: infinit args
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;
	va_list vars;

	if (n == 0)
		return (0);
	va_start(vars, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vars, int);
	}
	va_end(vars);
	return (sum);

}
