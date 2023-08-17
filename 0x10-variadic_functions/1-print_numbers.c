#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- print the numbers in args with its separators
 * @separator: the string separator
 * @n: the argument count
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	
	va_list num_list;
	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(num_list, int);
			printf("%d", num);
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	va_end(num_list);
	printf("\n");
}
