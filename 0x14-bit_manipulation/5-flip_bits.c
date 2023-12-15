#include "main.h"

/**
 * flip_bits- flips bit
 * @n: the bits to be flipped
 * @m: where to flip
 * Return: number of counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int x_OR = n ^ m;

	while (x_OR)
	{
		count += x_OR & 1;
		x_OR >>= 1;
	}
	return (count);
}
