#include "main.h"

/**
  * print_binary- turn numbers to binary
  * @n: the number to be turned
  * Return: void
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + 1);
}
