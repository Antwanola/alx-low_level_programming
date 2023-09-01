#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets bit vals
 * @n: the bits
 * @index: te index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
