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
	int i;
	char alpha;

	for (i = 0; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
