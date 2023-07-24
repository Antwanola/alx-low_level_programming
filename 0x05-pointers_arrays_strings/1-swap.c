#include "main.h"

/**
 * swap_int - swaps numbers
 * @a: first variable
 * @b: seconde variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
