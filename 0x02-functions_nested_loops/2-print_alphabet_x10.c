#include "main.h"

/**
 * print_alphabet_x10  - The usual main entry point of all c program
 *
 * Description: Just printing _puctchar
 *
 * Return: 0 as usual
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i <= 10; i++)
	{
	while (alpha <= 'z')
	{
	_putchar(alpha);
	}
	}
}
