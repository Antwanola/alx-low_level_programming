#include "main.h"

/**
 * set_bit- set the bit of a value to 1
 * @n: the bit
 * @index: the index
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	result = 1;
	result = result << index;
	*n = ((*n) | result);
	return (1);
}
