#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- variadic func to print strings
 * @separator: separator string
 * @n: argument count
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *new_arg;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		new_arg = va_arg(arg_list, char *);
		printf("%s", new_arg);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(arg_list);
	printf("\n");
}
