#include "main.h"

/**
 * set_bit- set the bit of a value to 1
 * @n: the bit
 * @index: the index
 *
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
