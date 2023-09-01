#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets value of bit
 * @n: the bit
 * @index: index of bits to set
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
