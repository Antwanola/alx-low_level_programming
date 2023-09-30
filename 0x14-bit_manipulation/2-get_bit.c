#include "main.h"

/**
  *get_bit- get bit at index
  *@n: the number to get it's bit index
  *@index: the index
  *Return: int
  */

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
