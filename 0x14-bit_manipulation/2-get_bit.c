#include "main.h"

/**
 * get_bit- gets the bit at given index
 * @n: the bit
 * @index: the index
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	while (result < index)
	{
		n = n >> 1;
		result++;
	}
	return ((n & 1));

}
