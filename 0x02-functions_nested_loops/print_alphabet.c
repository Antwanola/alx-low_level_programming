#include "main.h"
/**
 * main - The usual main entry point of all c program
 *
 * Description: Just making all alphas
 *
 * Return: 0 as usual
 */

void print_alphabet(void)
{
	char alpha;

	for( alpha = 'a'; alpha <= 'z'; alpha++ )
	{
		_putchar(alpha);
	}

	_putchar('\n');
}

