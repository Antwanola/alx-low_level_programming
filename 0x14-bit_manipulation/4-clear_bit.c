#include "main.h"

/**
 * clear_bit-clears the bit
 * @n: the bit
 * @index: the index
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
