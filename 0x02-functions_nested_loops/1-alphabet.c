#include "main.h"

/**
 * main - The usual main entry point of all c program
 *
 * Description: Just printing _puctchar
 *
 * Return: 0 as usual
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

	return (0);
}
