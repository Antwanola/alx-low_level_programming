#include "main.h"

/**
 * get_bit - get the val of bit @ index
 * @n: the int
 * @index: the index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
