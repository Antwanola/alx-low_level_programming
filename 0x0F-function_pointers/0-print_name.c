#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name- func pointer name print
 * @name: input name
 * @f: input function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
