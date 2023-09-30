#include "main.h"



int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	if (index > 63)
	{
		return (-1);
	}
	bit_index = (n >> index) & 1;
	return (bit_index);
}
