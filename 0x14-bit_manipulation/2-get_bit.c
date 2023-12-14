#include "main.h"




unsigned long int  print_binary(unsigned long int n)
{
	unsigned long int re = 0;
	if (n > 1)
		print_binary(n >> 1);
	re = ((n & 1) + '0');
	return (re);
}

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result = 0;
	result = print_binary(n);

}
